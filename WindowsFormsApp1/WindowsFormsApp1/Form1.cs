using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            openFileDialog1.Filter = filter;
            saveFileDialog1.Filter = filter;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        private string filter = "Text (*.txt)|*.txt|Dokument (*.doc)|*.doc";
        string retezec;
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void konecToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void otevřítToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if(openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                StreamReader sr = new StreamReader(openFileDialog1.FileName);
                retezec = sr.ReadToEnd();
                textBox1.Text = retezec;
                sr.Close();
            }
        }

        private void uložitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                StreamWriter sw = new StreamWriter(saveFileDialog1.FileName);
                retezec = textBox1.Text;
                sw.WriteLine(retezec);
                sw.Close();
            }
        }

        private void fontToolStripMenuItem_Click(object sender, EventArgs e)
        {
            fontDialog1.ShowColor = false; //true
            fontDialog1.Font = textBox1.Font;
            fontDialog1.Color = textBox1.ForeColor;

            if(fontDialog1.ShowDialog() == DialogResult.OK)
            {
                textBox1.Font = fontDialog1.Font;   
                textBox1.ForeColor = fontDialog1.Color;
            }
        }

        private void barvaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            ColorDialog MujColor = new ColorDialog();
            MujColor.AllowFullOpen = false; //vlastni barva ano/ne
            MujColor.Color = textBox1.ForeColor;

            if(MujColor.ShowDialog() == DialogResult.OK)
            {
                textBox1.ForeColor=MujColor.Color;  
            }
        }
    }
}
