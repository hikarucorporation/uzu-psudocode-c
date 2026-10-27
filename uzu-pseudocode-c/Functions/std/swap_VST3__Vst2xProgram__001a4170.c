// Function : swap<VST3::Vst2xProgram>
// Namespace: std
// Entry    : 001a4170
// Prototype: type swap<VST3::Vst2xProgram>(Vst2xProgram * param_1, Vst2xProgram * param_2)
// Body     : 001a4170 - 001a4267


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::enable_if<__and_<std::__not_<std::__is_tuple_like<VST3::Vst2xProgram> >,
   std::is_move_constructible<VST3::Vst2xProgram>, std::is_move_assignable<VST3::Vst2xProgram>
   >::value, void>::type std::swap<VST3::Vst2xProgram>(VST3::Vst2xProgram&, VST3::Vst2xProgram&) */

void __cdecl std::swap<VST3::Vst2xProgram>(Vst2xProgram *param_1,Vst2xProgram *param_2)

{
  Vst2xProgram *__src;
  long lVar1;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  Vst2xProgram *local_50;
  long local_48;
  undefined8 local_40 [3];
  
  local_88 = *(void **)param_1;
  uStack_80 = *(undefined8 *)(param_1 + 8);
  local_78 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  local_70 = *(void **)(param_1 + 0x18);
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  local_60 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_58 = *(undefined8 *)(param_1 + 0x30);
  __src = *(Vst2xProgram **)(param_1 + 0x38);
  if (__src == param_1 + 0x48) {
    lVar1 = *(long *)(param_1 + 0x40);
    local_50 = (Vst2xProgram *)local_40;
    memcpy((Vst2xProgram *)local_40,__src,lVar1 + 1);
  }
  else {
    local_40[0] = *(undefined8 *)(param_1 + 0x48);
    lVar1 = *(long *)(param_1 + 0x40);
    local_50 = __src;
  }
  *(Vst2xProgram **)(param_1 + 0x38) = param_1 + 0x48;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x48] = (Vst2xProgram)0x0;
  local_48 = lVar1;
  VST3::Vst2xProgram::operator=(param_1,param_2);
  VST3::Vst2xProgram::operator=(param_2,(Vst2xProgram *)&local_88);
  if (local_50 != (Vst2xProgram *)local_40) {
    operator_delete(local_50);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete(local_88);
  }
  return;
}


