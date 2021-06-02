
namespace Ex5
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.radioText = new System.Windows.Forms.RadioButton();
            this.radioBackground = new System.Windows.Forms.RadioButton();
            this.buttonBlue = new System.Windows.Forms.Button();
            this.buttonRed = new System.Windows.Forms.Button();
            this.buttonGreen = new System.Windows.Forms.Button();
            this.buttonYellow = new System.Windows.Forms.Button();
            this.buttonBlack = new System.Windows.Forms.Button();
            this.buttonWhite = new System.Windows.Forms.Button();
            this.textBox = new System.Windows.Forms.TextBox();
            this.label = new System.Windows.Forms.Label();
            this.buttonOK = new System.Windows.Forms.Button();
            this.buttonRAZ = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // radioText
            // 
            this.radioText.AutoSize = true;
            this.radioText.Location = new System.Drawing.Point(12, 12);
            this.radioText.Name = "radioText";
            this.radioText.Size = new System.Drawing.Size(46, 19);
            this.radioText.TabIndex = 0;
            this.radioText.TabStop = true;
            this.radioText.Text = "Text";
            this.radioText.UseVisualStyleBackColor = true;
            // 
            // radioBackground
            // 
            this.radioBackground.AutoSize = true;
            this.radioBackground.Location = new System.Drawing.Point(12, 39);
            this.radioBackground.Name = "radioBackground";
            this.radioBackground.Size = new System.Drawing.Size(89, 19);
            this.radioBackground.TabIndex = 1;
            this.radioBackground.TabStop = true;
            this.radioBackground.Text = "Background";
            this.radioBackground.UseVisualStyleBackColor = true;
            // 
            // buttonBlue
            // 
            this.buttonBlue.BackColor = System.Drawing.Color.Blue;
            this.buttonBlue.Location = new System.Drawing.Point(112, 12);
            this.buttonBlue.Name = "buttonBlue";
            this.buttonBlue.Size = new System.Drawing.Size(46, 46);
            this.buttonBlue.TabIndex = 2;
            this.buttonBlue.UseVisualStyleBackColor = false;
            this.buttonBlue.Click += new System.EventHandler(this.buttonBlue_Click);
            // 
            // buttonRed
            // 
            this.buttonRed.BackColor = System.Drawing.Color.Red;
            this.buttonRed.Location = new System.Drawing.Point(164, 12);
            this.buttonRed.Name = "buttonRed";
            this.buttonRed.Size = new System.Drawing.Size(46, 46);
            this.buttonRed.TabIndex = 3;
            this.buttonRed.UseVisualStyleBackColor = false;
            this.buttonRed.Click += new System.EventHandler(this.buttonRed_Click);
            // 
            // buttonGreen
            // 
            this.buttonGreen.BackColor = System.Drawing.Color.Lime;
            this.buttonGreen.Location = new System.Drawing.Point(216, 12);
            this.buttonGreen.Name = "buttonGreen";
            this.buttonGreen.Size = new System.Drawing.Size(46, 46);
            this.buttonGreen.TabIndex = 4;
            this.buttonGreen.UseVisualStyleBackColor = false;
            this.buttonGreen.Click += new System.EventHandler(this.buttonGreen_Click);
            // 
            // buttonYellow
            // 
            this.buttonYellow.BackColor = System.Drawing.Color.Yellow;
            this.buttonYellow.Location = new System.Drawing.Point(268, 12);
            this.buttonYellow.Name = "buttonYellow";
            this.buttonYellow.Size = new System.Drawing.Size(46, 46);
            this.buttonYellow.TabIndex = 5;
            this.buttonYellow.UseVisualStyleBackColor = false;
            this.buttonYellow.Click += new System.EventHandler(this.buttonYellow_Click);
            // 
            // buttonBlack
            // 
            this.buttonBlack.BackColor = System.Drawing.Color.Black;
            this.buttonBlack.Location = new System.Drawing.Point(320, 12);
            this.buttonBlack.Name = "buttonBlack";
            this.buttonBlack.Size = new System.Drawing.Size(46, 46);
            this.buttonBlack.TabIndex = 6;
            this.buttonBlack.UseVisualStyleBackColor = false;
            this.buttonBlack.Click += new System.EventHandler(this.buttonBlack_Click);
            // 
            // buttonWhite
            // 
            this.buttonWhite.BackColor = System.Drawing.Color.White;
            this.buttonWhite.Location = new System.Drawing.Point(372, 12);
            this.buttonWhite.Name = "buttonWhite";
            this.buttonWhite.Size = new System.Drawing.Size(46, 46);
            this.buttonWhite.TabIndex = 7;
            this.buttonWhite.UseVisualStyleBackColor = false;
            this.buttonWhite.Click += new System.EventHandler(this.buttonWhite_Click);
            // 
            // textBox
            // 
            this.textBox.Location = new System.Drawing.Point(12, 64);
            this.textBox.Name = "textBox";
            this.textBox.Size = new System.Drawing.Size(406, 23);
            this.textBox.TabIndex = 8;
            // 
            // label
            // 
            this.label.Location = new System.Drawing.Point(12, 141);
            this.label.Name = "label";
            this.label.Size = new System.Drawing.Size(406, 114);
            this.label.TabIndex = 9;
            this.label.Text = "label1";
            this.label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // buttonOK
            // 
            this.buttonOK.Location = new System.Drawing.Point(135, 93);
            this.buttonOK.Name = "buttonOK";
            this.buttonOK.Size = new System.Drawing.Size(75, 23);
            this.buttonOK.TabIndex = 10;
            this.buttonOK.Text = "OK";
            this.buttonOK.UseVisualStyleBackColor = true;
            this.buttonOK.Click += new System.EventHandler(this.buttonOK_Click);
            // 
            // buttonRAZ
            // 
            this.buttonRAZ.Location = new System.Drawing.Point(216, 93);
            this.buttonRAZ.Name = "buttonRAZ";
            this.buttonRAZ.Size = new System.Drawing.Size(75, 23);
            this.buttonRAZ.TabIndex = 11;
            this.buttonRAZ.Text = "RAZ";
            this.buttonRAZ.UseVisualStyleBackColor = true;
            this.buttonRAZ.Click += new System.EventHandler(this.buttonRAZ_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(430, 264);
            this.Controls.Add(this.buttonRAZ);
            this.Controls.Add(this.buttonOK);
            this.Controls.Add(this.label);
            this.Controls.Add(this.textBox);
            this.Controls.Add(this.buttonWhite);
            this.Controls.Add(this.buttonBlack);
            this.Controls.Add(this.buttonYellow);
            this.Controls.Add(this.buttonGreen);
            this.Controls.Add(this.buttonRed);
            this.Controls.Add(this.buttonBlue);
            this.Controls.Add(this.radioBackground);
            this.Controls.Add(this.radioText);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.RadioButton radioText;
        private System.Windows.Forms.RadioButton radioBackground;
        private System.Windows.Forms.Button buttonBlue;
        private System.Windows.Forms.Button buttonRed;
        private System.Windows.Forms.Button buttonGreen;
        private System.Windows.Forms.Button buttonYellow;
        private System.Windows.Forms.Button buttonBlack;
        private System.Windows.Forms.Button buttonWhite;
        private System.Windows.Forms.TextBox textBox;
        private System.Windows.Forms.Label label;
        private System.Windows.Forms.Button buttonOK;
        private System.Windows.Forms.Button buttonRAZ;
    }
}

