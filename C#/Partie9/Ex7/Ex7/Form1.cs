using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ex7
{
    public partial class Form1 : Form
    {
        private int joueur1 = 1;
        private int joueur2 = 2;

        public Form1()
        {
            InitializeComponent();
        }

        private void gameWon()
        {
            /*
             * 1 2 3
             * 4 5 6
             * 7 8 9
             */

            if(button1.Text == "X" && button2.Text == "X" && button3.Text == "X")
            {
                MessageBox.Show("Joueur 1 a gagné", "Partie fini");
            } else if (button1.Text == "O" && button2.Text == "O" && button3.Text == "O")
            {
                MessageBox.Show("Joueur 2 a gagné", "Partie fini");
            }

            if (button4.Text == "X" && button5.Text == "X" && button6.Text == "X")
            {
                MessageBox.Show("Joueur 1 a gagné", "Partie fini");
            }
            else if (button4.Text == "O" && button5.Text == "O" && button6.Text == "O")
            {
                MessageBox.Show("Joueur 2 a gagné", "Partie fini");
            }

            if (button7.Text == "X" && button8.Text == "X" && button9.Text == "X")
            {
                MessageBox.Show("Joueur 1 a gagné", "Partie fini");
            }
            else if (button7.Text == "O" && button8.Text == "O" && button9.Text == "O")
            {
                MessageBox.Show("Joueur 2 a gagné", "Partie fini");
            }

            if (button1.Text == "X" && button4.Text == "X" && button7.Text == "X")
            {
                MessageBox.Show("Joueur 1 a gagné", "Partie fini");
            }
            else if (button1.Text == "O" && button4.Text == "O" && button7.Text == "O")
            {
                MessageBox.Show("Joueur 2 a gagné", "Partie fini");
            }

            if (button2.Text == "X" && button5.Text == "X" && button8.Text == "X")
            {
                MessageBox.Show("Joueur 1 a gagné", "Partie fini");
            }
            else if (button2.Text == "O" && button5.Text == "O" && button8.Text == "O")
            {
                MessageBox.Show("Joueur 2 a gagné", "Partie fini");
            }

            if (button3.Text == "X" && button6.Text == "X" && button9.Text == "X")
            {
                MessageBox.Show("Joueur 1 a gagné", "Partie fini");
            }
            else if (button3.Text == "O" && button6.Text == "O" && button9.Text == "O")
            {
                MessageBox.Show("Joueur 2 a gagné", "Partie fini");
            }

            if (button1.Text == "X" && button5.Text == "X" && button9.Text == "X")
            {
                MessageBox.Show("Joueur 1 a gagné", "Partie fini");
            }
            else if (button1.Text == "O" && button5.Text == "O" && button9.Text == "O")
            {
                MessageBox.Show("Joueur 2 a gagné", "Partie fini");
            }

            if (button3.Text == "X" && button5.Text == "X" && button7.Text == "X")
            {
                MessageBox.Show("Joueur 1 a gagné", "Partie fini");
            }
            else if (button3.Text == "O" && button5.Text == "O" && button7.Text == "O")
            {
                MessageBox.Show("Joueur 2 a gagné", "Partie fini");
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;

            if (label2.Text == joueur1.ToString())
            {
                if (senderButton.Text == "O")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "X";
                        label2.Text = "2";
                    }
                }
            }
            else
            {
                if (senderButton.Text == "X")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "O";
                        label2.Text = "1";
                    }
                }
            }

            gameWon();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;

            if (label2.Text == joueur1.ToString())
            {
                if (senderButton.Text == "O")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "X";
                        label2.Text = "2";
                    }
                }
            }
            else
            {
                if (senderButton.Text == "X")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "O";
                        label2.Text = "1";
                    }
                }
            }

            gameWon();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;

            if (label2.Text == joueur1.ToString())
            {
                if (senderButton.Text == "O")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "X";
                        label2.Text = "2";
                    }
                }
            }
            else
            {
                if (senderButton.Text == "X")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "O";
                        label2.Text = "1";
                    }
                }
            }

            gameWon();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;

            if (label2.Text == joueur1.ToString())
            {
                if (senderButton.Text == "O")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "X";
                        label2.Text = "2";
                    }
                }
            }
            else
            {
                if (senderButton.Text == "X")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "O";
                        label2.Text = "1";
                    }
                }
            }

            gameWon();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;

            if (label2.Text == joueur1.ToString())
            {
                if (senderButton.Text == "O")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "X";
                        label2.Text = "2";
                    }
                }
            }
            else
            {
                if (senderButton.Text == "X")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "O";
                        label2.Text = "1";
                    }
                }
            }

            gameWon();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;

            if (label2.Text == joueur1.ToString())
            {
                if (senderButton.Text == "O")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "X";
                        label2.Text = "2";
                    }
                }
            }
            else
            {
                if (senderButton.Text == "X")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "O";
                        label2.Text = "1";
                    }
                }
            }

            gameWon();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;

            if (label2.Text == joueur1.ToString())
            {
                if (senderButton.Text == "O")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "X";
                        label2.Text = "2";
                    }
                }
            }
            else
            {
                if (senderButton.Text == "X")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "O";
                        label2.Text = "1";
                    }
                }
            }

            gameWon();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;

            if (label2.Text == joueur1.ToString())
            {
                if (senderButton.Text == "O")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "X";
                        label2.Text = "2";
                    }
                }
            }
            else
            {
                if (senderButton.Text == "X")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "O";
                        label2.Text = "1";
                    }
                }
            }

            gameWon();
        }

        private void button9_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;

            if (label2.Text == joueur1.ToString())
            {
                if (senderButton.Text == "O")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if(senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "X";
                        label2.Text = "2";
                    }
                }
            }
            else
            {
                if (senderButton.Text == "X")
                {
                    MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    if (senderButton.Text == "X")
                    {
                        MessageBox.Show("Vous ne pouvez pas cocher cette case", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    else
                    {
                        senderButton.Text = "O";
                        label2.Text = "1";
                    }
                }
            }

            gameWon();
        }
    }
}
