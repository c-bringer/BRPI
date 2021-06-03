using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ex6
{
    public partial class Form1 : Form
    {
        float num, ans;
        int count;

        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;
            label.Text = label.Text + senderButton.Text;
        }

        private void button0_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;
            label.Text = label.Text + senderButton.Text;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;
            label.Text = label.Text + senderButton.Text;
        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;
            label.Text = label.Text + senderButton.Text;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;
            label.Text = label.Text + senderButton.Text;
        }

        private void buttonDot_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;
            label.Text = label.Text + senderButton.Text;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;
            label.Text = label.Text + senderButton.Text;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;
            label.Text = label.Text + senderButton.Text;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;
            label.Text = label.Text + senderButton.Text;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;
            label.Text = label.Text + senderButton.Text;
        }

        private void buttonPlus_Click(object sender, EventArgs e)
        {
            num = float.Parse(label.Text);
            label.Text = "";
            count = 2;
        }

        private void buttonMoins_Click(object sender, EventArgs e)
        {
            num = float.Parse(label.Text);
            label.Text = "";
            count = 1;
        }

        private void buttonMulti_Click(object sender, EventArgs e)
        {
            num = float.Parse(label.Text);
            label.Text = "";
            count = 3;
        }

        private void buttonDivision_Click(object sender, EventArgs e)
        {
            num = float.Parse(label.Text);
            label.Text = "";
            count = 4;
        }

        private void buttonRetour_Click(object sender, EventArgs e)
        {
            String str = label.Text;

            if(str.Length > 1)
            {
                str = str.Substring(0, str.Length - 1);
            }
            else
            {
                str = "0";
            }

            label.Text = str;
        }

        private void buttonEqual_Click(object sender, EventArgs e)
        {
            switch (count)
            {
                case 1:
                    ans = num - float.Parse(label.Text);
                    label.Text = ans.ToString();
                    break;
                case 2:
                    ans = num + float.Parse(label.Text);
                    label.Text = ans.ToString();
                    break;
                case 3:
                    ans = num * float.Parse(label.Text);
                    label.Text = ans.ToString();
                    break;
                case 4:
                    ans = num / float.Parse(label.Text);
                    label.Text = ans.ToString();
                    break;
                default:
                    break;
            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            Button senderButton = (Button)sender;
            label.Text = label.Text + senderButton.Text;
        }
    }
}
