// Function : PlugInterfaceSupport
// Namespace: Steinberg:Vst:PlugInterfaceSupport
// Entry    : 001992f0
// Prototype: undefined PlugInterfaceSupport(PlugInterfaceSupport * this)
// Body     : 001992f0 - 0019956d


/* Steinberg::Vst::PlugInterfaceSupport::PlugInterfaceSupport() */

void __thiscall
Steinberg::Vst::PlugInterfaceSupport::PlugInterfaceSupport(PlugInterfaceSupport *this)

{
  vector<Steinberg::FUID,std::allocator<Steinberg::FUID>> *this_00;
  PlugInterfaceSupport *pPVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined **local_40 [3];
  
  *(undefined ***)this = &PTR_queryInterface_00704390;
  this_00 = (vector<Steinberg::FUID,std::allocator<Steinberg::FUID>> *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 8) = 1;
  local_40[0] = &PTR__FUID_00704de0;
  local_40[1] = (undefined **)IComponent::iid._8_8_;
  local_40[2] = (undefined **)IComponent::iid._16_8_;
                    /* try { // try from 0019933c to 0019955f has its CatchHandler @ 0019956e */
  std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::_M_realloc_insert<Steinberg::FUID>
            (this_00,(undefined8 *)0x0,(long)local_40);
  uVar3 = IAudioProcessor::iid._16_8_;
  uVar2 = IAudioProcessor::iid._8_8_;
  pPVar1 = this + 0x18;
  puVar4 = *(undefined8 **)(this + 0x18);
  local_40[0] = &PTR__FUID_00704de0;
  local_40[1] = (undefined **)IAudioProcessor::iid._8_8_;
  local_40[2] = (undefined **)IAudioProcessor::iid._16_8_;
  if (puVar4 == *(undefined8 **)(this + 0x20)) {
    std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::_M_realloc_insert<Steinberg::FUID>
              (this_00,*(undefined8 **)(this + 0x20),(long)local_40);
    puVar4 = *(undefined8 **)pPVar1;
  }
  else {
    *puVar4 = &PTR__FUID_00704de0;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    puVar4 = (undefined8 *)(*(long *)pPVar1 + 0x18);
    *(undefined8 **)pPVar1 = puVar4;
  }
  uVar3 = IEditController::iid._16_8_;
  uVar2 = IEditController::iid._8_8_;
  local_40[0] = &PTR__FUID_00704de0;
  local_40[1] = (undefined **)IEditController::iid._8_8_;
  local_40[2] = (undefined **)IEditController::iid._16_8_;
  if (puVar4 == *(undefined8 **)(this + 0x20)) {
    std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::_M_realloc_insert<Steinberg::FUID>
              (this_00,puVar4,(long)local_40);
    puVar4 = *(undefined8 **)pPVar1;
  }
  else {
    *puVar4 = &PTR__FUID_00704de0;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    puVar4 = (undefined8 *)(*(long *)pPVar1 + 0x18);
    *(undefined8 **)pPVar1 = puVar4;
  }
  uVar3 = IConnectionPoint::iid._16_8_;
  uVar2 = IConnectionPoint::iid._8_8_;
  local_40[0] = &PTR__FUID_00704de0;
  local_40[1] = (undefined **)IConnectionPoint::iid._8_8_;
  local_40[2] = (undefined **)IConnectionPoint::iid._16_8_;
  if (puVar4 == *(undefined8 **)(this + 0x20)) {
    std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::_M_realloc_insert<Steinberg::FUID>
              (this_00,puVar4,(long)local_40);
    puVar4 = *(undefined8 **)pPVar1;
  }
  else {
    *puVar4 = &PTR__FUID_00704de0;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    puVar4 = (undefined8 *)(*(long *)pPVar1 + 0x18);
    *(undefined8 **)pPVar1 = puVar4;
  }
  uVar3 = IUnitInfo::iid._16_8_;
  uVar2 = IUnitInfo::iid._8_8_;
  local_40[0] = &PTR__FUID_00704de0;
  local_40[1] = (undefined **)IUnitInfo::iid._8_8_;
  local_40[2] = (undefined **)IUnitInfo::iid._16_8_;
  if (puVar4 == *(undefined8 **)(this + 0x20)) {
    std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::_M_realloc_insert<Steinberg::FUID>
              (this_00,puVar4,(long)local_40);
    puVar4 = *(undefined8 **)pPVar1;
  }
  else {
    *puVar4 = &PTR__FUID_00704de0;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    puVar4 = (undefined8 *)(*(long *)pPVar1 + 0x18);
    *(undefined8 **)pPVar1 = puVar4;
  }
  uVar3 = IUnitData::iid._16_8_;
  uVar2 = IUnitData::iid._8_8_;
  local_40[0] = &PTR__FUID_00704de0;
  local_40[1] = (undefined **)IUnitData::iid._8_8_;
  local_40[2] = (undefined **)IUnitData::iid._16_8_;
  if (puVar4 == *(undefined8 **)(this + 0x20)) {
    std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::_M_realloc_insert<Steinberg::FUID>
              (this_00,puVar4,(long)local_40);
    puVar4 = *(undefined8 **)pPVar1;
  }
  else {
    *puVar4 = &PTR__FUID_00704de0;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    puVar4 = (undefined8 *)(*(long *)pPVar1 + 0x18);
    *(undefined8 **)pPVar1 = puVar4;
  }
  uVar3 = IProgramListData::iid._16_8_;
  uVar2 = IProgramListData::iid._8_8_;
  local_40[0] = &PTR__FUID_00704de0;
  local_40[1] = (undefined **)IProgramListData::iid._8_8_;
  local_40[2] = (undefined **)IProgramListData::iid._16_8_;
  if (puVar4 == *(undefined8 **)(this + 0x20)) {
    std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::_M_realloc_insert<Steinberg::FUID>
              (this_00,puVar4,(long)local_40);
    puVar4 = *(undefined8 **)pPVar1;
  }
  else {
    *puVar4 = &PTR__FUID_00704de0;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    puVar4 = (undefined8 *)(*(long *)pPVar1 + 0x18);
    *(undefined8 **)pPVar1 = puVar4;
  }
  uVar3 = IMidiMapping::iid._16_8_;
  uVar2 = IMidiMapping::iid._8_8_;
  local_40[0] = &PTR__FUID_00704de0;
  local_40[1] = (undefined **)IMidiMapping::iid._8_8_;
  local_40[2] = (undefined **)IMidiMapping::iid._16_8_;
  if (puVar4 == *(undefined8 **)(this + 0x20)) {
    std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::_M_realloc_insert<Steinberg::FUID>
              (this_00,puVar4,(long)local_40);
    puVar4 = *(undefined8 **)pPVar1;
  }
  else {
    *puVar4 = &PTR__FUID_00704de0;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    puVar4 = (undefined8 *)(*(long *)pPVar1 + 0x18);
    *(undefined8 **)pPVar1 = puVar4;
  }
  uVar3 = IEditController2::iid._16_8_;
  uVar2 = IEditController2::iid._8_8_;
  local_40[0] = &PTR__FUID_00704de0;
  local_40[1] = (undefined **)IEditController2::iid._8_8_;
  local_40[2] = (undefined **)IEditController2::iid._16_8_;
  if (puVar4 == *(undefined8 **)(this + 0x20)) {
    std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::_M_realloc_insert<Steinberg::FUID>
              (this_00,puVar4,(long)local_40);
  }
  else {
    *puVar4 = &PTR__FUID_00704de0;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    *(long *)pPVar1 = *(long *)pPVar1 + 0x18;
  }
  return;
}


