// Function : readInt64uArray
// Namespace: Steinberg:FStreamer
// Entry    : 00179400
// Prototype: ulong readInt64uArray(FStreamer * this, undefined8 * param_1, uint param_2)
// Body     : 00179400 - 001794bb


/* Steinberg::FStreamer::readInt64uArray(unsigned long*, int) */

ulong __thiscall
Steinberg::FStreamer::readInt64uArray(FStreamer *this,undefined8 *param_1,uint param_2)

{
  ushort *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((int)param_2 < 1) {
    uVar6 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)this + 0x10))(this,param_1,8);
    uVar6 = CONCAT71((int7)((ulong)lVar5 >> 8),1);
    if (lVar5 == 8) {
      uVar8 = (ulong)param_2;
      uVar6 = 0;
      uVar3 = 1;
      do {
        uVar7 = uVar3;
        if (*(short *)(this + 8) != 0) {
          uVar2 = *(undefined1 *)param_1;
          *(undefined1 *)param_1 = *(undefined1 *)((long)param_1 + 7);
          *(undefined1 *)((long)param_1 + 7) = uVar2;
          uVar4 = *(ushort *)((long)param_1 + 1) << 8 | *(ushort *)((long)param_1 + 1) >> 8;
          uVar6 = (ulong)uVar4;
          *(ushort *)((long)param_1 + 1) =
               *(ushort *)((long)param_1 + 5) << 8 | *(ushort *)((long)param_1 + 5) >> 8;
          *(ushort *)((long)param_1 + 5) = uVar4;
          puVar1 = (ushort *)((long)param_1 + 3);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
        }
        if (uVar8 == uVar7) {
          uVar6 = CONCAT71((int7)(uVar6 >> 8),uVar7 < uVar8);
          goto LAB_001794af;
        }
        param_1 = param_1 + 1;
        uVar6 = (**(code **)(*(long *)this + 0x10))(this,param_1,8);
        uVar3 = uVar7 + 1;
      } while (uVar6 == 8);
      uVar6 = CONCAT71((int7)(uVar6 >> 8),uVar7 < uVar8);
    }
    *param_1 = 0;
  }
LAB_001794af:
  return uVar6 ^ 1;
}


