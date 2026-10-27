// Function : fromAscii
// Namespace: Steinberg:PClassInfoW
// Entry    : 001a5600
// Prototype: undefined fromAscii(PClassInfoW * this, PClassInfoW * param_1)
// Body     : 001a5600 - 001a5d6b


/* Steinberg::PClassInfoW::fromAscii(Steinberg::PClassInfo2 const&) */

void __thiscall Steinberg::PClassInfoW::fromAscii(PClassInfoW *this,PClassInfoW *param_1)

{
  PClassInfoW PVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  size_t __n;
  PClassInfoW *__s;
  
  *this = *param_1;
  this[1] = param_1[1];
  this[2] = param_1[2];
  this[3] = param_1[3];
  this[4] = param_1[4];
  this[5] = param_1[5];
  this[6] = param_1[6];
  this[7] = param_1[7];
  this[8] = param_1[8];
  this[9] = param_1[9];
  this[10] = param_1[10];
  this[0xb] = param_1[0xb];
  this[0xc] = param_1[0xc];
  this[0xd] = param_1[0xd];
  this[0xe] = param_1[0xe];
  this[0xf] = param_1[0xf];
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  PVar1 = param_1[0x14];
  this[0x14] = PVar1;
  if (PVar1 == (PClassInfoW)0x0) {
    __s = this + 0x15;
    __n = 0x1f;
  }
  else {
    PVar1 = param_1[0x15];
    this[0x15] = PVar1;
    if (PVar1 == (PClassInfoW)0x0) {
      __s = this + 0x16;
      __n = 0x1e;
    }
    else {
      PVar1 = param_1[0x16];
      this[0x16] = PVar1;
      if (PVar1 == (PClassInfoW)0x0) {
        __s = this + 0x17;
        __n = 0x1d;
      }
      else {
        PVar1 = param_1[0x17];
        this[0x17] = PVar1;
        if (PVar1 == (PClassInfoW)0x0) {
          __s = this + 0x18;
          __n = 0x1c;
        }
        else {
          PVar1 = param_1[0x18];
          this[0x18] = PVar1;
          if (PVar1 == (PClassInfoW)0x0) {
            __s = this + 0x19;
            __n = 0x1b;
          }
          else {
            PVar1 = param_1[0x19];
            this[0x19] = PVar1;
            if (PVar1 == (PClassInfoW)0x0) {
              __s = this + 0x1a;
              __n = 0x1a;
            }
            else {
              PVar1 = param_1[0x1a];
              this[0x1a] = PVar1;
              if (PVar1 == (PClassInfoW)0x0) {
                __s = this + 0x1b;
                __n = 0x19;
              }
              else {
                PVar1 = param_1[0x1b];
                this[0x1b] = PVar1;
                if (PVar1 == (PClassInfoW)0x0) {
                  __s = this + 0x1c;
                  __n = 0x18;
                }
                else {
                  PVar1 = param_1[0x1c];
                  this[0x1c] = PVar1;
                  if (PVar1 == (PClassInfoW)0x0) {
                    __s = this + 0x1d;
                    __n = 0x17;
                  }
                  else {
                    PVar1 = param_1[0x1d];
                    this[0x1d] = PVar1;
                    if (PVar1 == (PClassInfoW)0x0) {
                      __s = this + 0x1e;
                      __n = 0x16;
                    }
                    else {
                      PVar1 = param_1[0x1e];
                      this[0x1e] = PVar1;
                      if (PVar1 == (PClassInfoW)0x0) {
                        __s = this + 0x1f;
                        __n = 0x15;
                      }
                      else {
                        PVar1 = param_1[0x1f];
                        this[0x1f] = PVar1;
                        if (PVar1 == (PClassInfoW)0x0) {
                          __s = this + 0x20;
                          __n = 0x14;
                        }
                        else {
                          PVar1 = param_1[0x20];
                          this[0x20] = PVar1;
                          if (PVar1 == (PClassInfoW)0x0) {
                            __s = this + 0x21;
                            __n = 0x13;
                          }
                          else {
                            PVar1 = param_1[0x21];
                            this[0x21] = PVar1;
                            if (PVar1 == (PClassInfoW)0x0) {
                              __s = this + 0x22;
                              __n = 0x12;
                            }
                            else {
                              PVar1 = param_1[0x22];
                              this[0x22] = PVar1;
                              if (PVar1 == (PClassInfoW)0x0) {
                                __s = this + 0x23;
                                __n = 0x11;
                              }
                              else {
                                PVar1 = param_1[0x23];
                                this[0x23] = PVar1;
                                if (PVar1 == (PClassInfoW)0x0) {
                                  __s = this + 0x24;
                                  __n = 0x10;
                                }
                                else {
                                  PVar1 = param_1[0x24];
                                  this[0x24] = PVar1;
                                  if (PVar1 == (PClassInfoW)0x0) {
                                    __s = this + 0x25;
                                    __n = 0xf;
                                  }
                                  else {
                                    PVar1 = param_1[0x25];
                                    this[0x25] = PVar1;
                                    if (PVar1 == (PClassInfoW)0x0) {
                                      __s = this + 0x26;
                                      __n = 0xe;
                                    }
                                    else {
                                      PVar1 = param_1[0x26];
                                      this[0x26] = PVar1;
                                      if (PVar1 == (PClassInfoW)0x0) {
                                        __s = this + 0x27;
                                        __n = 0xd;
                                      }
                                      else {
                                        PVar1 = param_1[0x27];
                                        this[0x27] = PVar1;
                                        if (PVar1 == (PClassInfoW)0x0) {
                                          __s = this + 0x28;
                                          __n = 0xc;
                                        }
                                        else {
                                          PVar1 = param_1[0x28];
                                          this[0x28] = PVar1;
                                          if (PVar1 == (PClassInfoW)0x0) {
                                            __s = this + 0x29;
                                            __n = 0xb;
                                          }
                                          else {
                                            PVar1 = param_1[0x29];
                                            this[0x29] = PVar1;
                                            if (PVar1 == (PClassInfoW)0x0) {
                                              __s = this + 0x2a;
                                              __n = 10;
                                            }
                                            else {
                                              PVar1 = param_1[0x2a];
                                              this[0x2a] = PVar1;
                                              if (PVar1 == (PClassInfoW)0x0) {
                                                __s = this + 0x2b;
                                                __n = 9;
                                              }
                                              else {
                                                PVar1 = param_1[0x2b];
                                                this[0x2b] = PVar1;
                                                if (PVar1 == (PClassInfoW)0x0) {
                                                  __s = this + 0x2c;
                                                  __n = 8;
                                                }
                                                else {
                                                  PVar1 = param_1[0x2c];
                                                  this[0x2c] = PVar1;
                                                  if (PVar1 == (PClassInfoW)0x0) {
                                                    __s = this + 0x2d;
                                                    __n = 7;
                                                  }
                                                  else {
                                                    PVar1 = param_1[0x2d];
                                                    this[0x2d] = PVar1;
                                                    if (PVar1 == (PClassInfoW)0x0) {
                                                      __s = this + 0x2e;
                                                      __n = 6;
                                                    }
                                                    else {
                                                      PVar1 = param_1[0x2e];
                                                      this[0x2e] = PVar1;
                                                      if (PVar1 == (PClassInfoW)0x0) {
                                                        __s = this + 0x2f;
                                                        __n = 5;
                                                      }
                                                      else {
                                                        PVar1 = param_1[0x2f];
                                                        this[0x2f] = PVar1;
                                                        if (PVar1 == (PClassInfoW)0x0) {
                                                          __s = this + 0x30;
                                                          __n = 4;
                                                        }
                                                        else {
                                                          PVar1 = param_1[0x30];
                                                          this[0x30] = PVar1;
                                                          if (PVar1 == (PClassInfoW)0x0) {
                                                            __s = this + 0x31;
                                                            __n = 3;
                                                          }
                                                          else {
                                                            PVar1 = param_1[0x31];
                                                            this[0x31] = PVar1;
                                                            if (PVar1 == (PClassInfoW)0x0) {
                                                              __s = this + 0x32;
                                                              __n = 2;
                                                            }
                                                            else {
                                                              PVar1 = param_1[0x32];
                                                              __s = this + 0x33;
                                                              this[0x32] = PVar1;
                                                              if (PVar1 != (PClassInfoW)0x0) {
                                                                *__s = param_1[0x33];
                                                                goto LAB_001a59d9;
                                                              }
                                                              __n = 1;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  memset(__s,0,__n);
LAB_001a59d9:
  lVar3 = 0;
  do {
    *(short *)(this + lVar3 * 2 + 0x34) = (short)(char)param_1[lVar3 + 0x34];
    if (param_1[lVar3 + 0x34] == (PClassInfoW)0x0) {
LAB_001a5a44:
      iVar2 = (int)lVar3;
joined_r0x001a5a47:
      if (iVar2 < 0x40) {
        memset(this + lVar3 * 2 + 0x34,0,(lVar3 * -2 + 0x7eU & 0x1fffffffe) + 2);
      }
      goto LAB_001a5a6a;
    }
    *(short *)(this + lVar3 * 2 + 0x36) = (short)(char)param_1[lVar3 + 0x35];
    if (param_1[lVar3 + 0x35] == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 1;
      goto LAB_001a5a44;
    }
    *(short *)(this + lVar3 * 2 + 0x38) = (short)(char)param_1[lVar3 + 0x36];
    if (param_1[lVar3 + 0x36] == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 2;
      iVar2 = (int)lVar3;
      goto joined_r0x001a5a47;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x3f);
  *(undefined2 *)(this + 0xb2) = 0;
LAB_001a5a6a:
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0x74);
  lVar3 = 0;
  do {
    PVar1 = param_1[lVar3 + 0x78];
    this[lVar3 + 0xb8] = PVar1;
    iVar2 = (int)lVar3;
    if (PVar1 == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 0xb9;
      uVar4 = 0x7f - iVar2;
joined_r0x001a5b12:
      if (uVar4 != 0) {
        memset(this + lVar3,0,(ulong)uVar4);
      }
      break;
    }
    PVar1 = param_1[lVar3 + 0x79];
    this[lVar3 + 0xb9] = PVar1;
    if (PVar1 == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 0xba;
      uVar4 = 0x7e - iVar2;
      goto joined_r0x001a5b12;
    }
    PVar1 = param_1[lVar3 + 0x7a];
    this[lVar3 + 0xba] = PVar1;
    if (PVar1 == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 0xbb;
      uVar4 = 0x7d - iVar2;
      goto joined_r0x001a5b12;
    }
    PVar1 = param_1[lVar3 + 0x7b];
    this[lVar3 + 0xbb] = PVar1;
    if (PVar1 == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 0xbc;
      uVar4 = 0x7c - iVar2;
      goto joined_r0x001a5b12;
    }
    lVar3 = lVar3 + 4;
  } while ((int)lVar3 != 0x80);
  lVar3 = 0;
  do {
    *(short *)(this + lVar3 * 2 + 0x138) = (short)(char)param_1[lVar3 + 0xf8];
    if (param_1[lVar3 + 0xf8] == (PClassInfoW)0x0) {
LAB_001a5baf:
      iVar2 = (int)lVar3;
joined_r0x001a5bb2:
      if (iVar2 < 0x40) {
        memset(this + lVar3 * 2 + 0x138,0,(lVar3 * -2 + 0x7eU & 0x1fffffffe) + 2);
      }
      goto LAB_001a5bd8;
    }
    *(short *)(this + lVar3 * 2 + 0x13a) = (short)(char)param_1[lVar3 + 0xf9];
    if (param_1[lVar3 + 0xf9] == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 1;
      goto LAB_001a5baf;
    }
    *(short *)(this + lVar3 * 2 + 0x13c) = (short)(char)param_1[lVar3 + 0xfa];
    if (param_1[lVar3 + 0xfa] == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 2;
      iVar2 = (int)lVar3;
      goto joined_r0x001a5bb2;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x3f);
  *(undefined2 *)(this + 0x1b6) = 0;
LAB_001a5bd8:
  lVar3 = 0;
  do {
    *(short *)(this + lVar3 * 2 + 0x1b8) = (short)(char)param_1[lVar3 + 0x138];
    if (param_1[lVar3 + 0x138] == (PClassInfoW)0x0) {
LAB_001a5c4f:
      iVar2 = (int)lVar3;
joined_r0x001a5c52:
      if (iVar2 < 0x40) {
        memset(this + lVar3 * 2 + 0x1b8,0,(lVar3 * -2 + 0x7eU & 0x1fffffffe) + 2);
      }
      goto LAB_001a5c78;
    }
    *(short *)(this + lVar3 * 2 + 0x1ba) = (short)(char)param_1[lVar3 + 0x139];
    if (param_1[lVar3 + 0x139] == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 1;
      goto LAB_001a5c4f;
    }
    *(short *)(this + lVar3 * 2 + 0x1bc) = (short)(char)param_1[lVar3 + 0x13a];
    if (param_1[lVar3 + 0x13a] == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 2;
      iVar2 = (int)lVar3;
      goto joined_r0x001a5c52;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x3f);
  *(undefined2 *)(this + 0x236) = 0;
LAB_001a5c78:
  lVar3 = 0;
  do {
    *(short *)(this + lVar3 * 2 + 0x238) = (short)(char)param_1[lVar3 + 0x178];
    if (param_1[lVar3 + 0x178] == (PClassInfoW)0x0) {
LAB_001a5ceb:
      iVar2 = (int)lVar3;
joined_r0x001a5cee:
      if (iVar2 < 0x40) {
        memset(this + lVar3 * 2 + 0x238,0,(lVar3 * -2 + 0x7eU & 0x1fffffffe) + 2);
        return;
      }
      return;
    }
    *(short *)(this + lVar3 * 2 + 0x23a) = (short)(char)param_1[lVar3 + 0x179];
    if (param_1[lVar3 + 0x179] == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 1;
      goto LAB_001a5ceb;
    }
    *(short *)(this + lVar3 * 2 + 0x23c) = (short)(char)param_1[lVar3 + 0x17a];
    if (param_1[lVar3 + 0x17a] == (PClassInfoW)0x0) {
      lVar3 = lVar3 + 2;
      iVar2 = (int)lVar3;
      goto joined_r0x001a5cee;
    }
    lVar3 = lVar3 + 3;
    if (lVar3 == 0x3f) {
      *(undefined2 *)(this + 0x2b6) = 0;
      return;
    }
  } while( true );
}


