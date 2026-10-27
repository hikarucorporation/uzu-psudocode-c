// Function : getInfo
// Namespace: Steinberg:Vst:AudioBus
// Entry    : 00190ab0
// Prototype: undefined8 getInfo(AudioBus * this, long param_1)
// Body     : 00190ab0 - 00190b94


/* Steinberg::Vst::AudioBus::getInfo(Steinberg::Vst::BusInfo&) */

undefined8 __thiscall Steinberg::Vst::AudioBus::getInfo(AudioBus *this,long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = 0;
  if (*(ulong *)(this + 0x40) != 0) {
    uVar4 = *(ulong *)(this + 0x40);
    do {
      iVar3 = iVar3 + ((uint)uVar4 & 1);
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar2);
  }
  *(int *)(param_1 + 8) = iVar3;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  uVar4 = 0x80;
  if (*(ulong *)(this + 0x18) < 0x80) {
    uVar4 = *(ulong *)(this + 0x18);
  }
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      *(undefined2 *)(param_1 + 0xc) = **(undefined2 **)(this + 0x10);
    }
    else {
      memcpy((undefined2 *)(param_1 + 0xc),*(undefined2 **)(this + 0x10),uVar4 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(this + 0x30);
  uVar1 = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}


