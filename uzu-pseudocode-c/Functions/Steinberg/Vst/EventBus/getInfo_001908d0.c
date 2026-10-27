// Function : getInfo
// Namespace: Steinberg:Vst:EventBus
// Entry    : 001908d0
// Prototype: undefined8 getInfo(EventBus * this, long param_1)
// Body     : 001908d0 - 0019098e


/* Steinberg::Vst::EventBus::getInfo(Steinberg::Vst::BusInfo&) */

undefined8 __thiscall Steinberg::Vst::EventBus::getInfo(EventBus *this,long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x3c);
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
  uVar2 = 0x80;
  if (*(ulong *)(this + 0x18) < 0x80) {
    uVar2 = *(ulong *)(this + 0x18);
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      *(undefined2 *)(param_1 + 0xc) = **(undefined2 **)(this + 0x10);
    }
    else {
      memcpy((undefined2 *)(param_1 + 0xc),*(undefined2 **)(this + 0x10),uVar2 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(this + 0x30);
  uVar1 = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}


