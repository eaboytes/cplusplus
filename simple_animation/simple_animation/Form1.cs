using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace simple_animation
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        Bitmap flight1 = new Bitmap(Properties.Resources.flight1), flight2 = new Bitmap(Properties.Resources.flight2), flight3 = new Bitmap(Properties.Resources.flight3);
        Timer flightTimer = new Timer();
        Bitmap flightFrame;
        Bitmap[] flyingFrames; 

        Keys moveRight = Keys.D;
        Keys moveLeft = Keys.A;
        float PositionX = 20;
        float PositionY = 200;


        int facingDirection = 1;

        private void Flight_Animator()
        {
            flightTimer.Interval = 100;
            flightTimer.Tick += Timer1_Tick;
            flightTimer.Start();
        }

        private Bitmap Flight_Frame2Draw()
        {
            int i;
            flyingFrames = new Bitmap[] { flight1, flight2, flight3 };
            if (i < flyingFrames.Length)
            {
                flightFrame = flyingFrames[i];
                i++;
            }

            else
            {
                i = 0;
            }
            return flightFrame;
            }

        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyData == moveRight)
            {
                Flight_Animator();
            }
            else if (e.KeyData == moveLeft)
            {
                if (flightTimer.Enabled != true)
                {
                    Flight_Animator();
                }
            }
        }

        private void Form1_KeyUp(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == moveRight)
            {
                flightTimer.Stop();
            }
            else if (e.KeyCode == moveLeft)
            {
                flightTimer.Stop();
            {    

        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
                if (flightTimer.Enabled == true)
                {
                    if (facingDirection == 1)
                    {
                        PositionX += 7;
                        e.Graphics.Drawimage(flight_Frame2Draw(), PositionX, PositionY);
                    }
                    else
                    {
                        PositionX -= 7;
                        e.Graphics.Drawimage(flight_Frame2Draw(), PositionX, PositionY);
                    }
                }
            }

        private void Timer1_Tick(object sender, EventArgs e)
        {
            Invalidate();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
                if (flightTimer.Enabled == true)
                {
                    PositionX += 7;
                    e.Graphics.Drawimage(flight_Frame2Draw(), PositionX, PositionY);
                }
        }
    }
}
