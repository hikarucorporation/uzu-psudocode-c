// Function : fromUTF8
// Namespace: Steinberg:String
// Entry    : 0017f760
// Prototype: undefined fromUTF8(String * this, char * param_1)
// Body     : 0017f760 - 0017f7ac


/* Steinberg::String::fromUTF8(char const*) */

void __thiscall Steinberg::String::fromUTF8(String *this,char *param_1)

{
  char *__ptr;
  size_t sVar1;
  
  __ptr = *(char **)(this + 8);
  if (__ptr != param_1) {
    if (__ptr != (char *)0x0) {
      free(__ptr);
      *(undefined8 *)(this + 8) = 0;
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000;
  }
  sVar1 = strlen(param_1);
  _toWideString(this,param_1,(int)sVar1,0xfde9);
  return;
}


