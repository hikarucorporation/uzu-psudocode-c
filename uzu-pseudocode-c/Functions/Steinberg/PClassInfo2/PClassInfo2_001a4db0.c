// Function : PClassInfo2
// Namespace: Steinberg:PClassInfo2
// Entry    : 001a4db0
// Prototype: undefined PClassInfo2(PClassInfo2 * this, PClassInfo2 * param_1, undefined4 param_2, PClassInfo2 * param_3, long param_4, undefined4 param_5, long param_6, long param_7, long param_8, long param_9)
// Body     : 001a4db0 - 001a55fe


/* Steinberg::PClassInfo2::PClassInfo2(char const*, int, char const*, char const*, int, char const*,
   char const*, char const*, char const*) */

void __thiscall
Steinberg::PClassInfo2::PClassInfo2
          (PClassInfo2 *this,PClassInfo2 *param_1,undefined4 param_2,PClassInfo2 *param_3,
          long param_4,undefined4 param_5,long param_6,long param_7,long param_8,long param_9)

{
  PClassInfo2 PVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  size_t __n;
  PClassInfo2 *__s;
  
  memset(this,0,0x1b8);
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
  *(undefined4 *)(this + 0x10) = param_2;
  if (param_3 != (PClassInfo2 *)0x0) {
    PVar1 = *param_3;
    this[0x14] = PVar1;
    if (PVar1 == (PClassInfo2)0x0) {
      __s = this + 0x15;
      __n = 0x1f;
    }
    else {
      PVar1 = param_3[1];
      this[0x15] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        __s = this + 0x16;
        __n = 0x1e;
      }
      else {
        PVar1 = param_3[2];
        this[0x16] = PVar1;
        if (PVar1 == (PClassInfo2)0x0) {
          __s = this + 0x17;
          __n = 0x1d;
        }
        else {
          PVar1 = param_3[3];
          this[0x17] = PVar1;
          if (PVar1 == (PClassInfo2)0x0) {
            __s = this + 0x18;
            __n = 0x1c;
          }
          else {
            PVar1 = param_3[4];
            this[0x18] = PVar1;
            if (PVar1 == (PClassInfo2)0x0) {
              __s = this + 0x19;
              __n = 0x1b;
            }
            else {
              PVar1 = param_3[5];
              this[0x19] = PVar1;
              if (PVar1 == (PClassInfo2)0x0) {
                __s = this + 0x1a;
                __n = 0x1a;
              }
              else {
                PVar1 = param_3[6];
                this[0x1a] = PVar1;
                if (PVar1 == (PClassInfo2)0x0) {
                  __s = this + 0x1b;
                  __n = 0x19;
                }
                else {
                  PVar1 = param_3[7];
                  this[0x1b] = PVar1;
                  if (PVar1 == (PClassInfo2)0x0) {
                    __s = this + 0x1c;
                    __n = 0x18;
                  }
                  else {
                    PVar1 = param_3[8];
                    this[0x1c] = PVar1;
                    if (PVar1 == (PClassInfo2)0x0) {
                      __s = this + 0x1d;
                      __n = 0x17;
                    }
                    else {
                      PVar1 = param_3[9];
                      this[0x1d] = PVar1;
                      if (PVar1 == (PClassInfo2)0x0) {
                        __s = this + 0x1e;
                        __n = 0x16;
                      }
                      else {
                        PVar1 = param_3[10];
                        this[0x1e] = PVar1;
                        if (PVar1 == (PClassInfo2)0x0) {
                          __s = this + 0x1f;
                          __n = 0x15;
                        }
                        else {
                          PVar1 = param_3[0xb];
                          this[0x1f] = PVar1;
                          if (PVar1 == (PClassInfo2)0x0) {
                            __s = this + 0x20;
                            __n = 0x14;
                          }
                          else {
                            PVar1 = param_3[0xc];
                            this[0x20] = PVar1;
                            if (PVar1 == (PClassInfo2)0x0) {
                              __s = this + 0x21;
                              __n = 0x13;
                            }
                            else {
                              PVar1 = param_3[0xd];
                              this[0x21] = PVar1;
                              if (PVar1 == (PClassInfo2)0x0) {
                                __s = this + 0x22;
                                __n = 0x12;
                              }
                              else {
                                PVar1 = param_3[0xe];
                                this[0x22] = PVar1;
                                if (PVar1 == (PClassInfo2)0x0) {
                                  __s = this + 0x23;
                                  __n = 0x11;
                                }
                                else {
                                  PVar1 = param_3[0xf];
                                  this[0x23] = PVar1;
                                  if (PVar1 == (PClassInfo2)0x0) {
                                    __s = this + 0x24;
                                    __n = 0x10;
                                  }
                                  else {
                                    PVar1 = param_3[0x10];
                                    this[0x24] = PVar1;
                                    if (PVar1 == (PClassInfo2)0x0) {
                                      __s = this + 0x25;
                                      __n = 0xf;
                                    }
                                    else {
                                      PVar1 = param_3[0x11];
                                      this[0x25] = PVar1;
                                      if (PVar1 == (PClassInfo2)0x0) {
                                        __s = this + 0x26;
                                        __n = 0xe;
                                      }
                                      else {
                                        PVar1 = param_3[0x12];
                                        this[0x26] = PVar1;
                                        if (PVar1 == (PClassInfo2)0x0) {
                                          __s = this + 0x27;
                                          __n = 0xd;
                                        }
                                        else {
                                          PVar1 = param_3[0x13];
                                          this[0x27] = PVar1;
                                          if (PVar1 == (PClassInfo2)0x0) {
                                            __s = this + 0x28;
                                            __n = 0xc;
                                          }
                                          else {
                                            PVar1 = param_3[0x14];
                                            this[0x28] = PVar1;
                                            if (PVar1 == (PClassInfo2)0x0) {
                                              __s = this + 0x29;
                                              __n = 0xb;
                                            }
                                            else {
                                              PVar1 = param_3[0x15];
                                              this[0x29] = PVar1;
                                              if (PVar1 == (PClassInfo2)0x0) {
                                                __s = this + 0x2a;
                                                __n = 10;
                                              }
                                              else {
                                                PVar1 = param_3[0x16];
                                                this[0x2a] = PVar1;
                                                if (PVar1 == (PClassInfo2)0x0) {
                                                  __s = this + 0x2b;
                                                  __n = 9;
                                                }
                                                else {
                                                  PVar1 = param_3[0x17];
                                                  this[0x2b] = PVar1;
                                                  if (PVar1 == (PClassInfo2)0x0) {
                                                    __s = this + 0x2c;
                                                    __n = 8;
                                                  }
                                                  else {
                                                    PVar1 = param_3[0x18];
                                                    this[0x2c] = PVar1;
                                                    if (PVar1 == (PClassInfo2)0x0) {
                                                      __s = this + 0x2d;
                                                      __n = 7;
                                                    }
                                                    else {
                                                      PVar1 = param_3[0x19];
                                                      this[0x2d] = PVar1;
                                                      if (PVar1 == (PClassInfo2)0x0) {
                                                        __s = this + 0x2e;
                                                        __n = 6;
                                                      }
                                                      else {
                                                        PVar1 = param_3[0x1a];
                                                        this[0x2e] = PVar1;
                                                        if (PVar1 == (PClassInfo2)0x0) {
                                                          __s = this + 0x2f;
                                                          __n = 5;
                                                        }
                                                        else {
                                                          PVar1 = param_3[0x1b];
                                                          this[0x2f] = PVar1;
                                                          if (PVar1 == (PClassInfo2)0x0) {
                                                            __s = this + 0x30;
                                                            __n = 4;
                                                          }
                                                          else {
                                                            PVar1 = param_3[0x1c];
                                                            this[0x30] = PVar1;
                                                            if (PVar1 == (PClassInfo2)0x0) {
                                                              __s = this + 0x31;
                                                              __n = 3;
                                                            }
                                                            else {
                                                              PVar1 = param_3[0x1d];
                                                              this[0x31] = PVar1;
                                                              if (PVar1 == (PClassInfo2)0x0) {
                                                                __s = this + 0x32;
                                                                __n = 2;
                                                              }
                                                              else {
                                                                PVar1 = param_3[0x1e];
                                                                __s = this + 0x33;
                                                                this[0x32] = PVar1;
                                                                if (PVar1 != (PClassInfo2)0x0) {
                                                                  *__s = param_3[0x1f];
                                                                  goto LAB_001a51d1;
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
  }
LAB_001a51d1:
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      PVar1 = *(PClassInfo2 *)(param_4 + lVar3);
      this[lVar3 + 0x34] = PVar1;
      iVar2 = (int)lVar3;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x35;
        uVar4 = 0x3f - iVar2;
joined_r0x001a524f:
        if (uVar4 != 0) {
          memset(this + lVar3,0,(ulong)uVar4);
        }
        break;
      }
      PVar1 = *(PClassInfo2 *)(param_4 + 1 + lVar3);
      this[lVar3 + 0x35] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x36;
        uVar4 = 0x3e - iVar2;
        goto joined_r0x001a524f;
      }
      PVar1 = *(PClassInfo2 *)(param_4 + 2 + lVar3);
      this[lVar3 + 0x36] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x37;
        uVar4 = 0x3d - iVar2;
        goto joined_r0x001a524f;
      }
      PVar1 = *(PClassInfo2 *)(param_4 + 3 + lVar3);
      this[lVar3 + 0x37] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x38;
        uVar4 = 0x3c - iVar2;
        goto joined_r0x001a524f;
      }
      lVar3 = lVar3 + 4;
    } while ((int)lVar3 != 0x40);
  }
  *(undefined4 *)(this + 0x74) = param_5;
  if (param_6 != 0) {
    lVar3 = 0;
    do {
      PVar1 = *(PClassInfo2 *)(param_6 + lVar3);
      this[lVar3 + 0x78] = PVar1;
      iVar2 = (int)lVar3;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x79;
        uVar4 = 0x7f - iVar2;
joined_r0x001a5300:
        if (uVar4 != 0) {
          memset(this + lVar3,0,(ulong)uVar4);
        }
        break;
      }
      PVar1 = *(PClassInfo2 *)(param_6 + 1 + lVar3);
      this[lVar3 + 0x79] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x7a;
        uVar4 = 0x7e - iVar2;
        goto joined_r0x001a5300;
      }
      PVar1 = *(PClassInfo2 *)(param_6 + 2 + lVar3);
      this[lVar3 + 0x7a] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x7b;
        uVar4 = 0x7d - iVar2;
        goto joined_r0x001a5300;
      }
      PVar1 = *(PClassInfo2 *)(param_6 + 3 + lVar3);
      this[lVar3 + 0x7b] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x7c;
        uVar4 = 0x7c - iVar2;
        goto joined_r0x001a5300;
      }
      lVar3 = lVar3 + 4;
    } while ((int)lVar3 != 0x80);
  }
  if (param_7 != 0) {
    lVar3 = 0;
    do {
      PVar1 = *(PClassInfo2 *)(param_7 + lVar3);
      this[lVar3 + 0xf8] = PVar1;
      iVar2 = (int)lVar3;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0xf9;
        uVar4 = 0x3f - iVar2;
joined_r0x001a53bc:
        if (uVar4 != 0) {
          memset(this + lVar3,0,(ulong)uVar4);
        }
        break;
      }
      PVar1 = *(PClassInfo2 *)(param_7 + 1 + lVar3);
      this[lVar3 + 0xf9] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0xfa;
        uVar4 = 0x3e - iVar2;
        goto joined_r0x001a53bc;
      }
      PVar1 = *(PClassInfo2 *)(param_7 + 2 + lVar3);
      this[lVar3 + 0xfa] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0xfb;
        uVar4 = 0x3d - iVar2;
        goto joined_r0x001a53bc;
      }
      PVar1 = *(PClassInfo2 *)(param_7 + 3 + lVar3);
      this[lVar3 + 0xfb] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0xfc;
        uVar4 = 0x3c - iVar2;
        goto joined_r0x001a53bc;
      }
      lVar3 = lVar3 + 4;
    } while ((int)lVar3 != 0x40);
  }
  if (param_8 != 0) {
    lVar3 = 0;
    do {
      PVar1 = *(PClassInfo2 *)(param_8 + lVar3);
      this[lVar3 + 0x138] = PVar1;
      iVar2 = (int)lVar3;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x139;
        uVar4 = 0x3f - iVar2;
joined_r0x001a546c:
        if (uVar4 != 0) {
          memset(this + lVar3,0,(ulong)uVar4);
        }
        break;
      }
      PVar1 = *(PClassInfo2 *)(param_8 + 1 + lVar3);
      this[lVar3 + 0x139] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x13a;
        uVar4 = 0x3e - iVar2;
        goto joined_r0x001a546c;
      }
      PVar1 = *(PClassInfo2 *)(param_8 + 2 + lVar3);
      this[lVar3 + 0x13a] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x13b;
        uVar4 = 0x3d - iVar2;
        goto joined_r0x001a546c;
      }
      PVar1 = *(PClassInfo2 *)(param_8 + 3 + lVar3);
      this[lVar3 + 0x13b] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x13c;
        uVar4 = 0x3c - iVar2;
        goto joined_r0x001a546c;
      }
      lVar3 = lVar3 + 4;
    } while ((int)lVar3 != 0x40);
  }
  if (param_9 != 0) {
    lVar3 = 0;
    do {
      PVar1 = *(PClassInfo2 *)(param_9 + lVar3);
      this[lVar3 + 0x178] = PVar1;
      iVar2 = (int)lVar3;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x179;
        uVar4 = 0x3f - iVar2;
joined_r0x001a5522:
        if (uVar4 == 0) {
          return;
        }
        memset(this + lVar3,0,(ulong)uVar4);
        return;
      }
      PVar1 = *(PClassInfo2 *)(param_9 + 1 + lVar3);
      this[lVar3 + 0x179] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x17a;
        uVar4 = 0x3e - iVar2;
        goto joined_r0x001a5522;
      }
      PVar1 = *(PClassInfo2 *)(param_9 + 2 + lVar3);
      this[lVar3 + 0x17a] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x17b;
        uVar4 = 0x3d - iVar2;
        goto joined_r0x001a5522;
      }
      PVar1 = *(PClassInfo2 *)(param_9 + 3 + lVar3);
      this[lVar3 + 0x17b] = PVar1;
      if (PVar1 == (PClassInfo2)0x0) {
        lVar3 = lVar3 + 0x17c;
        uVar4 = 0x3c - iVar2;
        goto joined_r0x001a5522;
      }
      lVar3 = lVar3 + 4;
    } while ((int)lVar3 != 0x40);
  }
  return;
}


