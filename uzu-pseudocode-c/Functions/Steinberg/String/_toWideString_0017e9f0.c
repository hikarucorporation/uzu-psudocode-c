// Function : _toWideString
// Namespace: Steinberg:String
// Entry    : 0017e9f0
// Prototype: ulong _toWideString(String * this, char * param_1, int param_2, int param_3)
// Body     : 0017e9f0 - 0017eada


/* Steinberg::String::_toWideString(char const*, int, unsigned int) */

ulong __thiscall
Steinberg::String::_toWideString(String *this,char *param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  undefined2 *__ptr;
  long lVar4;
  ulong uVar5;
  undefined8 unaff_R14;
  ulong uVar6;
  
  uVar3 = *(uint *)(this + 0x10);
  uVar6 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if ((uVar3 & 0x40000000) != 0) goto LAB_0017eac9;
  if ((param_1 == (char *)0x0) || (param_2 < 1)) {
LAB_0017eab2:
    *(uint *)(this + 0x10) = uVar3 | 0x40000000;
  }
  else {
    iVar2 = ConstString::multiByteToWideString((undefined2 *)0x0,param_1,0,param_3);
    if (iVar2 * 2 != 0) {
      __ptr = malloc((long)(iVar2 * 2 + 2));
      iVar2 = ConstString::multiByteToWideString(__ptr,param_1,param_2 + 1,param_3);
      if (-1 < iVar2) {
        if (*(void **)(this + 8) != (void *)0x0) {
          free(*(void **)(this + 8));
        }
        *(undefined2 **)(this + 8) = __ptr;
        this[0x13] = (String)((byte)this[0x13] | 0x40);
        lVar4 = (**(code **)(*(long *)this + 0x20))(this);
        uVar5 = 0;
        do {
          psVar1 = (short *)(lVar4 + uVar5);
          uVar5 = uVar5 + 2;
        } while (*psVar1 != 0);
        uVar3 = *(uint *)(this + 0x10) & 0xc0000000 |
                ((uint)(uVar5 >> 1) & 0x7fffffff) - 1 & 0x3fffffff;
        goto LAB_0017eab2;
      }
      free(__ptr);
    }
    uVar6 = 0;
  }
LAB_0017eac9:
  return uVar6 & 0xffffffff;
}


