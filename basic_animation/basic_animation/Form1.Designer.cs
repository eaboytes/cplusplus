namespace basic_animation
{
    partial class formrocket
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(formrocket));
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.picbirds = new System.Windows.Forms.PictureBox();
            this.timerbirds = new System.Windows.Forms.Timer(this.components);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picbirds)).BeginInit();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.Location = new System.Drawing.Point(0, 0);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(100, 50);
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // picbirds
            // 
            this.picbirds.BackColor = System.Drawing.Color.Transparent;
            this.picbirds.Image = ((System.Drawing.Image)(resources.GetObject("picbirds.Image")));
            this.picbirds.Location = new System.Drawing.Point(1587, 160);
            this.picbirds.Name = "picbirds";
            this.picbirds.Size = new System.Drawing.Size(499, 336);
            this.picbirds.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.picbirds.TabIndex = 1;
            this.picbirds.TabStop = false;
            // 
            // timerbirds
            // 
            this.timerbirds.Interval = 10;
            this.timerbirds.Tick += new System.EventHandler(this.timerbirds_Tick);
            // 
            // formrocket
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.ClientSize = new System.Drawing.Size(2544, 1401);
            this.Controls.Add(this.picbirds);
            this.Controls.Add(this.pictureBox1);
            this.Name = "formrocket";
            this.Text = "Basic Animation";
            this.Load += new System.EventHandler(this.formrocket_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picbirds)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.PictureBox picbirds;
        private System.Windows.Forms.Timer timerbirds;
    }
}

