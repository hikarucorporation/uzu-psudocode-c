// Function : loadPrograms
// Namespace: VST3:_anonymous_namespace_
// Entry    : 0018f540
// Prototype: undefined8 loadPrograms((anonymous_namespace) * this, Vst2xProgram * param_1, Vst2xProgram * param_2, int * param_3, ulong param_4, undefined8 param_5)
// Body     : 0018f540 - 0018f619


/* VST3::(anonymous namespace)::loadPrograms(Steinberg::IBStream&, std::vector<VST3::Vst2xProgram,
   std::allocator<VST3::Vst2xProgram> >&, VST3::Optional<int> const&) */

undefined8 __thiscall
VST3::(anonymous_namespace)::loadPrograms
          (_anonymous_namespace_ *this,Vst2xProgram *param_1,Vst2xProgram *param_2,int *param_3,
          ulong param_4,undefined8 param_5)

{
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined8 uVar1;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  int *piVar3;
  _anonymous_namespace_ *local_98;
  void *local_90 [3];
  void *local_78;
  undefined1 *local_58;
  undefined1 local_48 [16];
  char local_38;
  
  uVar2 = (undefined7)((ulong)in_RAX >> 8);
  if (param_1 != param_2) {
    piVar3 = param_3;
    local_98 = this;
    do {
      loadProgram((_anonymous_namespace_ *)local_90,&local_98,param_3,piVar3,param_4,param_5);
      if (local_38 == '\0') {
        if (local_58 != local_48) {
          operator_delete(local_58);
        }
        if (local_78 != (void *)0x0) {
          operator_delete(local_78);
        }
        if (local_90[0] != (void *)0x0) {
          operator_delete(local_90[0]);
        }
        return 0;
      }
      uVar1 = std::swap<VST3::Vst2xProgram>(param_1,(Vst2xProgram *)local_90);
      if (local_58 != local_48) {
        operator_delete(local_58);
        uVar1 = extraout_RAX;
      }
      if (local_78 != (void *)0x0) {
        operator_delete(local_78);
        uVar1 = extraout_RAX_00;
      }
      if (local_90[0] != (void *)0x0) {
        operator_delete(local_90[0]);
        uVar1 = extraout_RAX_01;
      }
      param_1 = param_1 + 0x58;
    } while (param_1 != param_2);
    uVar2 = (undefined7)((ulong)uVar1 >> 8);
  }
  return CONCAT71(uVar2,1);
}


