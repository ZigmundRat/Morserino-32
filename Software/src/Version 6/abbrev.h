#ifndef ABBREV_H_
#define ABBREV_H_

/// ABBREVIATIONS in various lengths for CW Trainer
///////////////////////////////////////////////////

/******************************************************************************************************************************
 *  morse_3 Software for the Morserino-32 multi-functional Morse code machine, based on the Heltec WiFi LORA (ESP32) module ***
 *  Copyright (C) 2018-2025  Willi Kraml, OE1WKL                                                                            ***
 *
 *  This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 *  of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with this program.
 *  If not, see <https://www.gnu.org/licenses/>.
 *****************************************************************************************************************************/

namespace Abbrev
{

  const int ABBREV_NUMBER_OF_ELEMENTS = 245;                                    // how many items all together?
  const int ABBREV_MAX_SIZE = 9;                                                // longest item +1
  const int ABBREV_POINTER[] = {0, 236, 151, 41, 11, 2, 1, 0};// array where items start with length = index

  const char * const abbreviations[]  = {
    "congrats" ,   /// l = 8
    "output" ,     /// l = 6
    "award" ,      /// l = 5
    "conds" ,
    "condx" ,
    "cuagn" ,
    "elbug" ,
    "excus" ,
    "oscar" ,
    "unlis" ,
    "watts" ,
    "awdh" ,       /// l = 4 pos = 11
    "awds" ,
    "bcnu" ,
    "buro" ,
    "call" ,
    "diff" ,
    "fone" ,
    "freq" ,
    "iaru" ,
    "info" ,
    "inpt" ,
    "mesz" ,
    "mins" ,
    "psed" ,
    "rcvd" ,
    "rprt" ,
    "rtty" ,
    "sase" ,
    "sigs" ,
    "sked" ,
    "sstv" ,
    "sure" ,
    "temp" ,
    "test" ,
    "vert" ,
    "wtts" ,
    "xcus" ,
    "xcvr" ,
    "xmas" ,
    "xtal" ,
    "abt" ,      /// l = 3 pos = 41
    "adr" ,
    "agc" ,
    "agn" ,
    "alc" ,
    "ans" ,
    "ant" ,
    "atv" ,
    "avc" ,
    "bci" ,
    "bfo" ,
    "bpm" ,
    "btr" ,
    "btw" ,
    "bug" ,
    "cfm" ,
    "cul" ,
    "dwn" ,
    "fer" ,
    "frd" ,
    "fwd" ,
    "gnd" ,
    "gud" ,
    "ham" ,
    "hpe" ,
    "hrd" ,
    "hrs" ,
    "hvy" ,
    "irc" ,
    "itu" ,
    "khz" ,
    "lbr" ,
    "lid" ,
    "lis" ,
    "lng" ,
    "loc" ,
    "log" ,
    "lsb" ,
    "luf" ,
    "mez" ,
    "mgr" ,
    "mhz" ,
    "min" ,
    "mni" ,
    "mod" ,
    "msg" ,
    "mtr" ,
    "muf" ,
    "net" ,
    "nil" ,
    "osc" ,
    "pep" ,
    "pse" ,
    "pwr" ,
    "qaz" ,
    "qra" ,
    "qrb" ,
    "qrg" ,
    "qrl" ,
    "qrm" ,
    "qrn" ,
    "qro" ,
    "qrp" ,
    "qrq" ,
    "qrs" ,
    "qrt" ,
    "qru" ,
    "qrv" ,
    "qrx" ,
    "qrz" ,
    "qsb" ,
    "qsk" ,
    "qsl" ,
    "qso" ,
    "qsp" ,
    "qst" ,
    "qsy" ,
    "qsz" ,
    "qtc" ,
    "qth" ,
    "qtr" ,
    "ref" ,
    "rfi" ,
    "rig" ,
    "rpt" ,
    "rst" ,
    "shf" ,
    "sri" ,
    "ssb" ,
    "stn" ,
    "swl" ,
    "swr" ,
    "tia" ,
    "tks" ,
    "tnx" ,
    "trx" ,
    "tvi" ,
    "ufb" ,
    "uhf" ,
    "ukw" ,
    "usb" ,
    "utc" ,
    "vfo" ,
    "vhf" ,
    "vln" ,
    "wid" ,
    "wkd" ,
    "wkg" ,
    "wpm" ,
    "xyl" ,
    "33" ,         //// l=2 pos = 151
    "44" ,
    "55" ,
    "72" ,
    "73" ,
    "88" ,
    "99" ,
    "aa" ,
    "ab" ,
    "ac" ,
    "af" ,
    "am" ,
    "am" ,
    "bc" ,
    "bd" ,
    "bk" ,
    "b4" ,
    "cl" ,
    "cq" ,
    "cu" ,
    "cw" ,
    "db" ,
    "dc" ,
    "de" ,
    "dr" ,
    "dx" ,
    "ee" ,
    "el" ,
    "es" ,
    "fb" ,
    "fm" ,
    "fr" ,
    "ga" ,
    "gb" ,
    "gd" ,
    "gd" ,
    "ge" ,
    "gl" ,
    "gm" ,
    "gn" ,
    "gp" ,
    "gs" ,
    "gt" ,
    "hf" ,
    "hi" ,
    "hr" ,
    "hv" ,
    "hw" ,
    "if" ,
    "ii" ,
    "km" ,
    "kw" ,
    "ky" ,
    "lf" ,
    "lp" ,
    "lw" ,
    "ma" ,
    "mm" ,
    "my" ,
    "nf" ,
    "no" ,
    "nr" ,
    "nr" ,
    "nw" ,
    "ok" ,
    "om" ,
    "op" ,
    "ow" ,
    "pa" ,
    "pm" ,
    "px" ,
    "re" ,
    "rf" ,
    "rx" ,
    "sn" ,
    "sp" ,
    "tu" ,
    "tx" ,
    "up" ,
    "ur" ,
    "vl" ,
    "vy" ,
    "wl" ,
    "wx" ,
    "yl" ,
    "i" ,        /// l = 1; pos = 236
    "k" ,
    "n" ,
    "r" ,
    "t" ,
    "u" ,
    "v" ,
    "w" ,
    "z" };
}

#endif /* #ifndef ABBREV_H_ */