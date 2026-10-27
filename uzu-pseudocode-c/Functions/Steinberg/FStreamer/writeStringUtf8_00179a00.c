// Function : writeStringUtf8
// Namespace: Steinberg:FStreamer
// Entry    : 00179a00
// Prototype: undefined8 writeStringUtf8(FStreamer * this, void * param_1)
// Body     : 00179a00 - 00179bcd


/* Steinberg::FStreamer::writeStringUtf8(char16_t const*) */

undefined8 __thiscall Steinberg::FStreamer::writeStringUtf8(FStreamer *this,void *param_1)

{
  short *psVar1;
  undefined2 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined2 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined **local_48;
  undefined2 *local_40;
  uint local_38;
  
  local_40 = (undefined2 *)0x0;
  local_48 = &PTR__String_00702c10;
  local_38 = 0x40000000;
  if (param_1 != (void *)0x0) {
    uVar6 = 0;
    do {
      psVar1 = (short *)((long)param_1 + uVar6);
      uVar6 = uVar6 + 2;
    } while (*psVar1 != 0);
    uVar9 = (int)(uVar6 >> 1) - 1;
    if (uVar9 == 0) {
      local_38 = 0x40000000;
    }
    else {
      puVar2 = malloc(uVar6 & 0x1fffffffe);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
        puVar2[uVar9] = 0;
        local_40 = puVar2;
        if (0 < (int)uVar9) {
          memcpy(puVar2,param_1,(ulong)uVar9 * 2);
        }
        local_38 = (uVar9 & 0x3fffffff) + 0x40000000;
        if ((uVar9 & 0x3fffffff) != 0) {
          uVar3 = 0;
          do {
            if (0x7f < (ushort)puVar2[uVar3]) {
                    /* try { // try from 00179b89 to 00179baa has its CatchHandler @ 00179bce */
              Steinberg::String::toMultiByte((String *)&local_48,0xfde9);
              lVar4 = (**(code **)(*(long *)this + 0x18))(this,&DAT_005db398,3);
              if (lVar4 == 3) goto LAB_00179af0;
              uVar8 = 0;
              if (local_40 == (undefined2 *)0x0) {
                return 0;
              }
              goto LAB_00179b3d;
            }
            uVar3 = uVar3 + 1;
          } while ((((uint)(uVar6 >> 1) & 0x7fffffff) - 1 & 0x3fffffff) != uVar3);
        }
      }
    }
  }
                    /* try { // try from 00179ae6 to 00179aef has its CatchHandler @ 00179bce */
  Steinberg::String::toMultiByte((String *)&local_48,0);
LAB_00179af0:
  uVar9 = local_38 & 0x3fffffff;
  if ((local_38 & 0x40000000) == 0) {
    puVar5 = (undefined2 *)&DAT_005dae18;
    if (local_40 != (undefined2 *)0x0) {
      puVar5 = local_40;
    }
  }
  else {
    puVar2 = (undefined2 *)&DAT_005dae18;
    if ((local_40 == (undefined2 *)0x0) || (uVar9 == 0)) goto LAB_00179b19;
    Steinberg::String::toMultiByte((String *)&local_48,0);
    puVar2 = (undefined2 *)&DAT_005dae18;
    puVar5 = local_40;
    if (local_40 == (undefined2 *)0x0) {
      puVar5 = (undefined2 *)&DAT_005dae18;
    }
    if ((local_38 & 0x40000000) != 0) goto LAB_00179b19;
  }
  puVar2 = puVar5;
LAB_00179b19:
  lVar7 = (ulong)uVar9 + 1;
                    /* try { // try from 00179b20 to 00179b6c has its CatchHandler @ 00179bd0 */
  lVar4 = (**(code **)(*(long *)this + 0x18))(this,puVar2,lVar7);
  uVar8 = CONCAT71((int7)((ulong)lVar7 >> 8),lVar4 == lVar7);
  if (local_40 != (undefined2 *)0x0) {
LAB_00179b3d:
    local_48 = &PTR__String_00702c10;
    free(local_40);
  }
  return uVar8;
}


