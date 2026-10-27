// Function : String
// Namespace: Steinberg:String
// Entry    : 0017eb70
// Prototype: undefined String(String * this, void * param_1, uint param_2, char param_3)
// Body     : 0017eb70 - 0017ec2d


/* Steinberg::String::String(char16_t const*, int, bool) */

void __thiscall Steinberg::String::String(String *this,void *param_1,uint param_2,char param_3)

{
  short *psVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__String_00702c10;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000 | 0x40000000;
  if (param_1 != (void *)0x0) {
    if (param_3 == '\0') {
      if ((int)param_2 < 0) {
        return;
      }
    }
    else {
      uVar3 = 0;
      do {
        psVar1 = (short *)((long)param_1 + uVar3);
        uVar3 = uVar3 + 2;
      } while (*psVar1 != 0);
      uVar2 = (int)(uVar3 >> 1) - 1;
      uVar5 = param_2;
      if (uVar2 < param_2) {
        uVar5 = uVar2;
      }
      bVar6 = (int)param_2 < 0;
      param_2 = uVar5;
      if (bVar6) {
        param_2 = uVar2;
      }
    }
    uVar4 = resize(this,param_2,1,'\0');
    if ((char)uVar4 != '\0') {
      if ((0 < (int)param_2) && (*(void **)(this + 8) != (void *)0x0)) {
        memcpy(*(void **)(this + 8),param_1,(ulong)param_2 * 2);
      }
      *(uint *)(this + 0x10) =
           (*(uint *)(this + 0x10) & 0x80000000) + (param_2 & 0x3fffffff) + 0x40000000;
    }
  }
  return;
}


