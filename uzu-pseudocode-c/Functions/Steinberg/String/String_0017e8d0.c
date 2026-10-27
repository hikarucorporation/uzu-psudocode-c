// Function : String
// Namespace: Steinberg:String
// Entry    : 0017e8d0
// Prototype: undefined String(String * this, char * param_1, int param_2, uint param_3, char param_4)
// Body     : 0017e8d0 - 0017e9dd


/* WARNING: Removing unreachable block (ram,0x0017e98a) */
/* Steinberg::String::String(char const*, Steinberg::MBCodePage, int, bool) */

void __thiscall
Steinberg::String::String(String *this,char *param_1,int param_2,uint param_3,char param_4)

{
  uint uVar1;
  undefined8 uVar2;
  size_t sVar3;
  
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(uint *)(this + 0x10) & 0x80000000;
  *(undefined ***)this = &PTR__String_00702c10;
  *(uint *)(this + 0x10) = uVar1;
  if (param_1 == (char *)0x0) {
    return;
  }
  if (((int)param_3 < 0) || (param_4 == '\0')) {
    if (param_4 != '\0') {
      if ((int)param_3 < 0) {
        sVar3 = strlen(param_1);
        param_3 = (uint)sVar3;
      }
      goto joined_r0x0017e9d6;
    }
    if (-1 < (int)param_3) goto LAB_0017e947;
  }
  else {
    if (param_1[param_3] == '\0') {
joined_r0x0017e9d6:
      if (0 < (int)param_3) {
                    /* try { // try from 0017e931 to 0017e940 has its CatchHandler @ 0017e9de */
        _toWideString(this,param_1,param_3,param_2);
      }
      return;
    }
LAB_0017e947:
    uVar2 = resize(this,param_3,0,'\0');
    if ((char)uVar2 == '\0') {
      uVar1 = *(uint *)(this + 0x10);
      if ((uVar1 & 0x40000000) != 0) goto LAB_0017e9b6;
    }
    else {
      if ((param_3 != 0) && (*(void **)(this + 8) != (void *)0x0)) {
        memcpy(*(void **)(this + 8),param_1,(ulong)param_3);
      }
      uVar1 = *(uint *)(this + 0x10) & 0x80000000 | param_3 & 0x3fffffff;
      *(uint *)(this + 0x10) = uVar1;
    }
  }
  if ((*(char **)(this + 8) != (char *)0x0) && ((uVar1 & 0x3fffffff) != 0)) {
                    /* try { // try from 0017e9a9 to 0017e9b3 has its CatchHandler @ 0017e9de */
    _toWideString(this,*(char **)(this + 8),uVar1 & 0x3fffffff,param_2);
    return;
  }
LAB_0017e9b6:
  *(uint *)(this + 0x10) = uVar1 | 0x40000000;
  return;
}


