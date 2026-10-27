// Function : resize
// Namespace: std:vector_VST3__Vst2xProgram_std__allocator_VST3__Vst2xProgram__
// Entry    : 0019f110
// Prototype: undefined resize(vector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>> * this, ulong param_1)
// Body     : 0019f110 - 0019f1b7


/* std::vector<VST3::Vst2xProgram, std::allocator<VST3::Vst2xProgram> >::resize(unsigned long) */

void __thiscall
std::vector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>>::resize
          (vector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>> *this,ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(this + 8);
  lVar3 = (long)puVar1 - *(long *)this >> 3;
  uVar2 = lVar3 * 0x2e8ba2e8ba2e8ba3;
  if (uVar2 < param_1) {
    _M_default_append(this,param_1 + lVar3 * -0x2e8ba2e8ba2e8ba3);
    return;
  }
  if ((param_1 < uVar2) &&
     (puVar5 = (undefined8 *)(*(long *)this + param_1 * 0x58), puVar1 != puVar5)) {
    puVar4 = puVar5;
    do {
      if (puVar4 + 9 != (undefined8 *)puVar4[7]) {
        operator_delete((undefined8 *)puVar4[7]);
      }
      if ((void *)puVar4[3] != (void *)0x0) {
        operator_delete((void *)puVar4[3]);
      }
      if ((void *)*puVar4 != (void *)0x0) {
        operator_delete((void *)*puVar4);
      }
      puVar4 = puVar4 + 0xb;
    } while (puVar4 != puVar1);
    *(undefined8 **)(this + 8) = puVar5;
  }
  return;
}


