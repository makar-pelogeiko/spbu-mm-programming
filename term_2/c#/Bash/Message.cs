﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bash
{
    public abstract class Message
    {
        internal Status st;
        internal Interup interup;
        private string data;

        public string Cmd
        {
            get
            {
                return data;
            }
            protected set
            {
                data = value;
            }
        }
    }
}
