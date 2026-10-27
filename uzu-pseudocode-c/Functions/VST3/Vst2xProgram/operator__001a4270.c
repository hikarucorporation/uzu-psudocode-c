// Function : operator=
// Namespace: VST3:Vst2xProgram
// Entry    : 001a4270
// Prototype: Vst2xProgram * operator=(Vst2xProgram * this, Vst2xProgram * param_1)
// Body     : 001a4270 - 001a4395


/* VST3::Vst2xProgram::TEMPNAMEPLACEHOLDERVALUE(VST3::Vst2xProgram&&) */

Vst2xProgram * __thiscall VST3::Vst2xProgram::operator=(Vst2xProgram *this,Vst2xProgram *param_1)

{
  void *pvVar1;
  Vst2xProgram *__dest;
  undefined8 uVar2;
  size_t __n;
  long lVar3;
  Vst2xProgram *__src;
  
  pvVar1 = *(void **)this;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  __dest = *(Vst2xProgram **)(this + 0x38);
  if (__dest == this + 0x48) {
    __src = param_1 + 0x48;
    if (*(Vst2xProgram **)(param_1 + 0x38) == __src) goto LAB_001a4348;
    *(Vst2xProgram **)(this + 0x38) = *(Vst2xProgram **)(param_1 + 0x38);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  }
  else {
    __src = *(Vst2xProgram **)(param_1 + 0x38);
    if (__src == param_1 + 0x48) {
LAB_001a4348:
      if (param_1 != this) {
        __n = *(size_t *)(param_1 + 0x40);
        if (__n != 0) {
          if (__n == 1) {
            *__dest = *__src;
          }
          else {
            memcpy(__dest,__src,__n);
          }
        }
        lVar3 = *(long *)(param_1 + 0x40);
        *(long *)(this + 0x40) = lVar3;
        *(undefined1 *)(*(long *)(this + 0x38) + lVar3) = 0;
        __src = *(Vst2xProgram **)(param_1 + 0x38);
      }
      goto LAB_001a437b;
    }
    uVar2 = *(undefined8 *)(this + 0x48);
    *(Vst2xProgram **)(this + 0x38) = __src;
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
    if (__dest != (Vst2xProgram *)0x0) {
      *(Vst2xProgram **)(param_1 + 0x38) = __dest;
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      __src = __dest;
      goto LAB_001a437b;
    }
  }
  __src = param_1 + 0x48;
  *(Vst2xProgram **)(param_1 + 0x38) = __src;
LAB_001a437b:
  *(undefined8 *)(param_1 + 0x40) = 0;
  *__src = (Vst2xProgram)0x0;
  return this;
}


