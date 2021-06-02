using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ex5
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttonOK_Click(object sender, EventArgs e)
        {
            if(textBox.Text == "")
            {
                MessageBox.Show("Erreur: aucun message d'écrit", "Erreur", MessageBoxButtons.OK, MessageBoxIcon.Error);
            } else
            {
                label.Text = textBox.Text;
            }
        }

        private void buttonRAZ_Click(object sender, EventArgs e)
        {
            textBox.Text = "";
            label.Text = "label1";
            label.ForeColor = System.Drawing.Color.Black;
            label.BackColor = System.Drawing.Color.White;
            radioText.Checked = true;
        }

        private void buttonBlue_Click(object sender, EventArgs e)
        {
            if(radioText.Checked == true)
            {
                label.ForeColor = System.Drawing.Color.Blue;
            } else
            {
                label.BackColor = System.Drawing.Color.Blue;
            }
        }

        private void buttonRed_Click(object sender, EventArgs e)
        {
            if (radioText.Checked == true)
            {
                label.ForeColor = System.Drawing.Color.Red;
            }
            else
            {
                label.BackColor = System.Drawing.Color.Red;
            }
        }

        private void buttonGreen_Click(object sender, EventArgs e)
        {
            if (radioText.Checked == true)
            {
                label.ForeColor = System.Drawing.Color.Green;
            }
            else
            {
                label.BackColor = System.Drawing.Color.Green;
            }
        }

        private void buttonYellow_Click(object sender, EventArgs e)
        {
            if (radioText.Checked == true)
            {
                label.ForeColor = System.Drawing.Color.Yellow;
            }
            else
            {
                label.BackColor = System.Drawing.Color.Yellow;
            }
        }

        private void buttonBlack_Click(object sender, EventArgs e)
        {
            if (radioText.Checked == true)
            {
                label.ForeColor = System.Drawing.Color.Black;
            }
            else
            {
                label.BackColor = System.Drawing.Color.Black;
            }
        }

        private void buttonWhite_Click(object sender, EventArgs e)
        {
            if (radioText.Checked == true)
            {
                label.ForeColor = System.Drawing.Color.White;
            }
            else
            {
                label.BackColor = System.Drawing.Color.White;
            }
        }
    }
}
