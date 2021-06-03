-- Create database
CREATE DATABASE IF NOT EXISTS tp1 CHARACTER SET utf8 COLLATE utf8_general_ci;

DROP TABLE IF EXISTS TYPE;
-- Create type table
CREATE TABLE TYPE
(
    TYP_LP VARCHAR(6),
    NOM_TYPE VARCHAR(20),

    CONSTRAINT PK_TYPE_TYP_LP PRIMARY KEY (TYP_LP)
);

-- Add columns in segment table
ALTER TABLE SEGMENT 
ADD ETAGE INTEGER(2),
ADD NB_SALLE INTEGER(2),
ADD NB_POSTE INTEGER(2);

-- Add column in logiciel table
ALTER TABLE LOGICIEL
ADD NB_INSTALL INTEGER(2);

-- Add column in poste table
ALTER TABLE POSTE
ADD NB_LOG INTEGER(2);

-- DESC SEGMENT;
-- SELECT * FROM SEGMENT;
-- Affiche la strucutre et le contenu de la table.

-- Insert into type table
INSERT INTO TYPE (TYP_LP, NOM_TYPE) VALUES ('TX', 'Terminal X-WINDOW');
INSERT INTO TYPE (TYP_LP, NOM_TYPE) VALUES ('UNIX', 'Systeme Unix');
INSERT INTO TYPE (TYP_LP, NOM_TYPE) VALUES ('PCNT', 'PC Windows NT');
INSERT INTO TYPE (TYP_LP, NOM_TYPE) VALUES ('PCWS', 'PC Windows 95');
INSERT INTO TYPE (TYP_LP, NOM_TYPE) VALUES ('NC', 'Network Computer');
INSERT INTO TYPE (TYP_LP, NOM_TYPE) VALUES ('BeOS', 'Systeme Be');

-- Add constraint on logiciel table
ALTER TABLE LOGICIEL ADD CONSTRAINT FK_LOGICIEL_TYPE_L FOREIGN KEY (TYPE_L) REFERENCES TYPE(TYP_LP);

-- Add constraint on poste table
ALTER TABLE POSTE ADD CONSTRAINT FK_POSTE_TYPE_P FOREIGN KEY (TYPE_P) REFERENCES TYPE(TYP_LP);

-- Insert into salle table
-- Si le N_SEGMENT est pas referencés dans SEGMENT et que celui ajouté dans l'insert n'existe pas dans SEGMENT, impossible de faire l'insert
INSERT INTO SALLE (N_SALLE, NOM_S, N_SEGMENT) VALUES ('s98', 'Salle bidon1', '130.120.80');
INSERT INTO SALLE (N_SALLE, NOM_S, N_SEGMENT) VALUES ('s99', 'Salle bidon2', '130.120.80');

-- SELECT * FROM TYPE;
-- Affiche le contenu de la table.

-- Add uselless insert on type table
INSERT INTO TYPE (TYP_LP, NOM_TYPE) VALUES ('BIDON1', 'azerrty');
INSERT INTO TYPE (TYP_LP, NOM_TYPE) VALUES ('BIDON2', 'qwerty');

-- SELECT * FROM TYPE;
-- Affiche le contenu de la table.

-- ROLLBACK;

-- SELECT * FROM TYPE;
-- Affiche le contenu de la table.
-- Je ne vois aucune différence, pas de retour arrière.

-- Add insert into type table
INSERT INTO TYPE (TYP_LP, NOM_TYPE) VALUES ('Mac', 'Machintosh');

-- COMMIT;
-- SELECT * FROM TYPE;
-- Affiche le contenu de la table.
-- Je ne vois aucune différence, pas de retour arrière.
-- ROLLBACK;
-- Affiche le contenu de la table.
-- Je ne vois aucune différence, pas de retour arrière.