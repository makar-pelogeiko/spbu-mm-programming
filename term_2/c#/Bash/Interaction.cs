﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bash
{
    class Interaction : IInteraction
    {
        public string GetStr()
        {
            return Console.ReadLine();
        }
    }

}
