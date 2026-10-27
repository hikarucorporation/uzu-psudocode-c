// Function : setText
// Namespace: Steinberg:StringObject
// Entry    : 001835c0
// Prototype: undefined setText(StringObject * this, char * param_1)
// Body     : 001835c0 - 00183640


/* non-virtual thunk to Steinberg::StringObject::setText(char const*) */

void __thiscall Steinberg::StringObject::setText(StringObject *this,char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (*(char **)(this + -0x10) != param_1) {
    if (param_1 == (char *)0x0) {
      sVar1 = 0;
    }
    else {
      sVar1 = strlen(param_1);
    }
    uVar3 = (uint)sVar1;
    uVar2 = Steinberg::String::resize((String *)(this + -0x18),uVar3,0,'\0');
    if ((char)uVar2 != '\0') {
      if (((param_1 != (char *)0x0) && (0 < (int)uVar3)) &&
         (*(void **)(this + -0x10) != (void *)0x0)) {
        memcpy(*(void **)(this + -0x10),param_1,sVar1 & 0xffffffff);
      }
      *(uint *)(this + -8) = *(uint *)(this + -8) & 0x80000000 | uVar3 & 0x3fffffff;
    }
  }
  return;
}


