// Function : addPlugInterfaceSupported
// Namespace: Steinberg:Vst:PlugInterfaceSupport
// Entry    : 00199590
// Prototype: undefined addPlugInterfaceSupported(PlugInterfaceSupport * this, undefined8 * param_1)
// Body     : 00199590 - 001995e5


/* Steinberg::Vst::PlugInterfaceSupport::addPlugInterfaceSupported(char const*) */

void __thiscall
Steinberg::Vst::PlugInterfaceSupport::addPlugInterfaceSupported
          (PlugInterfaceSupport *this,undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **local_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_18 = &PTR__FUID_00704de0;
  local_10 = 0;
  uStack_8 = 0;
  if (param_1 != (undefined8 *)0x0) {
    local_10 = *param_1;
    uStack_8 = param_1[1];
  }
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar1 == *(undefined8 **)(this + 0x20)) {
    std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::_M_realloc_insert<Steinberg::FUID>
              ((vector<Steinberg::FUID,std::allocator<Steinberg::FUID>> *)(this + 0x10),puVar1,
               (long)&local_18);
    return;
  }
  *puVar1 = &PTR__FUID_00704de0;
  puVar1[1] = local_10;
  puVar1[2] = uStack_8;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 0x18;
  return;
}


