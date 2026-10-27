// Function : ConstString
// Namespace: Steinberg:ConstString
// Entry    : 0017a200
// Prototype: undefined ConstString(ConstString * this, char * param_1, uint param_2)
// Body     : 0017a200 - 0017a23e


/* Steinberg::ConstString::ConstString(char const*, int) */

void __thiscall Steinberg::ConstString::ConstString(ConstString *this,char *param_1,uint param_2)

{
  size_t sVar1;
  
  *(undefined ***)this = &PTR__ConstString_00704d88;
  *(char **)(this + 8) = param_1;
  if ((int)param_2 < 0) {
    if (param_1 == (char *)0x0) {
      param_2 = 0;
    }
    else {
      sVar1 = strlen(param_1);
      param_2 = (uint)sVar1;
    }
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000 | param_2 & 0x3fffffff;
  return;
}


