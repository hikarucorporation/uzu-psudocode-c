// Function : removePlugInterfaceSupported
// Namespace: Steinberg:Vst:PlugInterfaceSupport
// Entry    : 00199640
// Prototype: bool removePlugInterfaceSupported(PlugInterfaceSupport * this, undefined8 * param_1)
// Body     : 00199640 - 00199736


/* Steinberg::Vst::PlugInterfaceSupport::removePlugInterfaceSupported(char const*) */

bool __thiscall
Steinberg::Vst::PlugInterfaceSupport::removePlugInterfaceSupported
          (PlugInterfaceSupport *this,undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined **local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_30 = &PTR__FUID_00704de0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_1 != (undefined8 *)0x0) {
    local_28 = *param_1;
    uStack_20 = param_1[1];
  }
  lVar4 = std::
          __find_if<__gnu_cxx::__normal_iterator<Steinberg::FUID*,std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>>,__gnu_cxx::__ops::_Iter_equals_val<Steinberg::FUID_const>>
                    (*(long *)(this + 0x10),*(long *)(this + 0x18),(long)&local_30);
  lVar1 = *(long *)(this + 0x18);
  if (lVar4 != lVar1) {
    lVar2 = *(long *)(this + 0x10);
    lVar3 = (lVar4 - lVar2) / 0x18;
    lVar8 = lVar2 + lVar3 * 0x18 + 0x18;
    lVar7 = lVar1;
    if ((lVar8 != lVar1) && (uVar5 = lVar1 - lVar8, 0 < (long)uVar5)) {
      uVar5 = uVar5 / 0x18 + 1;
      puVar6 = (undefined8 *)(lVar2 + lVar3 * 0x18 + 0x20);
      do {
        puVar6[-3] = *puVar6;
        puVar6[-2] = puVar6[1];
        uVar5 = uVar5 - 1;
        puVar6 = puVar6 + 3;
      } while (1 < uVar5);
      lVar7 = *(long *)(this + 0x18);
    }
    *(long *)(this + 0x18) = lVar7 + -0x18;
    (*(code *)**(undefined8 **)(lVar7 + -0x18))();
  }
  return lVar4 != lVar1;
}


