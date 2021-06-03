-- Type du poste p8 	
SELECT TYPE_P 
FROM POSTE 
WHERE N_POSTE = 'p8';

-- Affichage du nom des postes qui sont de type UNIX ou PCWS
SELECT * 
FROM POSTE 
WHERE TYPE_P IN('UNIX', 'PCWS');

-- Affichage du nom des postes qui ne sont pas de type UNIX ou PCWS
SELECT * 
FROM POSTE 
WHERE TYPE_P NOT IN('UNIX', 'PCWS');

-- Noms des logiciels de type UNIX
SELECT NOM_L 
FROM LOGICIEL 
WHERE TYPE_L = 'UNIX';

-- Noms des logiciels qui ne sont pas de type UNIX
SELECT NOM_L 
FROM LOGICIEL 
WHERE TYPE_L <> 'UNIX';

-- Numéro des segments qui contiennent des postes de type UNIX
SELECT N_SEGMENT 
FROM POSTE 
WHERE TYPE_P = 'UNIX';

-- Numéro des segments qui ne contiennent pas des postes UNIX
SELECT N_SEGMENT 
FROM POSTE 
WHERE TYPE_P <> 'UNIX';

-- Adresse IP et numéros des postes UNIX ou PCWS et sur le segment 130.120.80 triés par numéro de salle décroissant
SELECT N_POSTE, CONCAT(N_SEGMENT, '.', AD) 
FROM POSTE 
WHERE TYPE_P IN('UNIX', 'PCWS') 
AND N_SEGMENT = '130.120.80' 
ORDER BY N_POSTE DESC;

-- Numéros des logiciels qui sont installés sur le poste p6
SELECT N_LOG 
FROM INSTALLER 
WHERE N_POSTE = 'p6';

-- Numéros des postes qui contiennent le logiciel log1
SELECT N_POSTE 
FROM INSTALLER 
WHERE N_LOG = 'log1';

-- Noms et adresses IP complète des postes de type TX PROBL7ME
SELECT NOM_P, CONCAT(N_SEGMENT, '.', AD) 
FROM POSTE 
WHERE TYPE_P = 'TX';

-- Dates d’installation du logiciel log7
SELECT DATE_INS 
FROM INSTALLER 
WHERE N_LOG = 'log7';

-- Nombres d’installation
SELECT COUNT(*) 
FROM INSTALLER;

-- Nombres de poste
SELECT COUNT(*) 
FROM POSTE;

-- Pour chaque poste, le nombre de logiciels installés
SELECT N_POSTE, COUNT(*) 
FROM INSTALLER 
GROUP BY N_POSTE;

-- Dans chaque salle, le nombre de postes installés
SELECT N_SALLE, NB_POSTE
FROM SALLE
GROUP BY N_SALLE;

-- Plus récente date d’achat d’un logiciel
SELECT MIN(DATE_ACH)
FROM LOGICIEL;

-- Plus ancienne date d’achat d’un logiciel
SELECT MAX(DATE_ACH)
FROM LOGICIEL;

-- Nom du logiciel ayant la date d’achat la plus récente
SELECT NOM_L
FROM LOGICIEL
WHERE DATE_ACH = (SELECT MAX(DATE_ACH)
                  FROM LOGICIEL);

-- Numéro du logiciel qui a été installé en premier
SELECT N_LOG
FROM INSTALLER
WHERE DATE_INS = (SELECT MIN(DATE_INS)
                  FROM INSTALLER);

-- Numéro du logiciel qui a été installé en dernier
SELECT N_LOG
FROM INSTALLER
WHERE DATE_INS = (SELECT MAX(DATE_INS)
                  FROM INSTALLER);

-- Numéros des postes ayant 2 installations de logiciel
SELECT N_POSTE
FROM POSTE
WHERE NB_LOG > 2;

-- Nombres de postes ayant 2 installations de logiciel
SELECT COUNT(*)
FROM POSTE
WHERE NB_LOG > 2;

-- Types de postes qui n'existant pas sur les réseaux du parc informatique
SELECT TYPE_LP 
FROM TYPE 
WHERE NOT EXISTS(SELECT DISTINCT TYPE_LP
                FROM POSTE
                WHERE TYPE_P = TYPE_LP);

-- Types se retrouvant à la fois comme type de poste et comme type de logiciel
SELECT DISTINCT TYPE_LP
FROM TYPE
WHERE TYPE_LP IN (SELECT TYPE_P
                FROM POSTE);

-- Types qui existent en tant que poste de travail mais qui ne concernent aucun logiciel
SELECT TYPE_P
FROM POSTE
WHERE NOT EXISTS(SELECT DISTINCT TYPE_L
                FROM LOGICIEL
                WHERE TYPE_P = TYPE_L);

-- Adresses IP des postes qui contiennent le logiciel log6
SELECT CONCAT(N_SEGMENT, '.', AD)
FROM POSTE AS P, LOGICIEL AS L
WHERE P.TYPE_P = L.TYPE_L
AND L.N_LOG = 'log6';

-- Adresses IP des postes qui contiennent le logiciel de nom Oracle 8
SELECT CONCAT(N_SEGMENT, '.', AD)
FROM POSTE AS P, LOGICIEL AS L
WHERE P.TYPE_P = L.TYPE_L
AND L.N_LOG = 'Oracle 8';

-- Noms des salles où on peut trouver au moins un poste avec le logiciel Oracle 7 installé
SELECT NOM_S
FROM SALLE AS S, POSTE AS P, LOGICIEL AS L 
WHERE S.NOM_S = P.N_SALLE
AND P.TYPE_P = L.TYPE_L
AND L.N_LOG = 'Oracle 7'
GROUP BY NOM_S;

-- Numéro et nom des segments possédant exactement trois postes de type TX
SELECT S.N_SEGMENT, S.NOM_SEGMENT
FROM POSTE AS P, SEGMENT AS S
WHERE P.TYPE_P = 'TX'
GROUP BY S.N_SEGMENT, S.NOM_SEGMENT
HAVING COUNT(*) = 3;

-- Liste complète des installations triées par numéro de segment, numéro de salle et adresse IP
SELECT I.DATE_INS, I.N_LOG, I.N_POSTE
FROM INSTALLER AS I, POSTE AS P 
WHERE I.N_POSTE = P.N_POSTE
ORDER BY P.N_SEGMENT, P.N_SALLE, P.AD;