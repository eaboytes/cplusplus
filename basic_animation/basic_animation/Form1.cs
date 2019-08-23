using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace basic_animation
{
    public partial class formrocket : Form
    {
        public formrocket()
        {
            InitializeComponent();
        }

        private void timerbirds_Tick(object sender, EventArgs e)
        {
            picbirds.Left -= 2;
        }

        private void formrocket_Load(object sender, EventArgs e)
        {
            timerbirds.Start();
        }
    }
}
