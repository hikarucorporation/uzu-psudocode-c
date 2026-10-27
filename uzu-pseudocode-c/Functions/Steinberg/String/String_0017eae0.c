// Function : String
// Namespace: Steinberg:String
// Entry    : 0017eae0
// Prototype: undefined String(String * this, char * param_1, uint param_2, char param_3)
// Body     : 0017eae0 - 0017eb6a


/* Steinberg::String::String(char const*, int, bool) */

void __thiscall Steinberg::String::String(String *this,char *param_1,uint param_2,char param_3)

{
  uint uVar1;
  size_t sVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  
  *(undefined8 *)(this + 8) = 0;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000;
  *(undefined ***)this = &PTR__String_00702c10;
  if (param_1 != (char *)0x0) {
    if (param_3 == '\0') {
      if ((int)param_2 < 0) {
        return;
      }
    }
    else {
      sVar2 = strlen(param_1);
      uVar1 = (uint)sVar2;
      uVar4 = param_2;
      if (uVar1 < param_2) {
        uVar4 = uVar1;
      }
      bVar5 = (int)param_2 < 0;
      param_2 = uVar4;
      if (bVar5) {
        param_2 = uVar1;
      }
    }
    uVar3 = resize(this,param_2,0,'\0');
    if ((char)uVar3 != '\0') {
      if ((0 < (int)param_2) && (*(void **)(this + 8) != (void *)0x0)) {
        memcpy(*(void **)(this + 8),param_1,(ulong)param_2);
      }
      *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000 | param_2 & 0x3fffffff;
    }
  }
  return;
}


