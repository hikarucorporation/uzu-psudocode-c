// Function : vprintf
// Namespace: Steinberg:String
// Entry    : 00182390
// Prototype: String * vprintf(String * this, char * param_1, __gnuc_va_list param_2)
// Body     : 00182390 - 00182412


/* Steinberg::String::vprintf(char const*, __va_list_tag*) */

String * __thiscall Steinberg::String::vprintf(String *this,char *param_1,__gnuc_va_list param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  uint uVar3;
  char acStack_1018 [4104];
  
  vsnprintf(acStack_1018,0xfff,param_1,param_2);
  if (*(undefined1 **)(this + 8) != acStack_1018) {
    sVar1 = strlen(acStack_1018);
    uVar3 = (uint)sVar1;
    uVar2 = resize(this,uVar3,0,'\0');
    if ((char)uVar2 != '\0') {
      if ((0 < (int)uVar3) && (*(void **)(this + 8) != (void *)0x0)) {
        memcpy(*(void **)(this + 8),acStack_1018,sVar1 & 0xffffffff);
      }
      *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000 | uVar3 & 0x3fffffff;
    }
  }
  return this;
}


