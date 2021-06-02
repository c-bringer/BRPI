using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ex2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttonOK_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;

            if(senderButton.Text == "OK")
            {
                senderButton.Text = "NOK";
            } else
            {
                senderButton.Text = "OK";
            }
        }
    }
}
