// Function : scanFloat
// Namespace: Steinberg:ConstString
// Entry    : 0017dfe0
// Prototype: ulong scanFloat(ConstString * this, undefined8 param_1, uint param_2, char param_3)
// Body     : 0017dfe0 - 0017e3b7


/* Steinberg::ConstString::scanFloat(double&, unsigned int, bool) const */

ulong __thiscall
Steinberg::ConstString::scanFloat(ConstString *this,undefined8 param_1,uint param_2,char param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 local_62;
  undefined **local_60;
  undefined *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar8 = 0;
  if (*(long *)(this + 8) == 0) goto LAB_0017e352;
  uVar5 = *(uint *)(this + 0x10) & 0x3fffffff;
  if ((uVar5 == 0) || (uVar5 <= param_2)) goto LAB_0017e352;
  local_58 = (undefined *)0x0;
  local_60 = &PTR__String_00702c10;
  local_50 = *(uint *)(this + 0x10) & 0x40000000;
                    /* try { // try from 0017e03e to 0017e04f has its CatchHandler @ 0017e3ba */
  Steinberg::String::assign((String *)&local_60,(long *)this,0xffffffff);
  if (((byte)this[0x13] & 0x40) == 0) {
    if ((local_50 & 0x40000000) == 0) {
      uVar5 = 0;
      if (-1 < (int)param_2) {
        uVar5 = param_2;
      }
      if (uVar5 < (local_50 & 0x3fffffff)) {
        uVar8 = (ulong)uVar5;
        do {
          if (local_58[uVar8] == ',') goto LAB_0017e19c;
          uVar8 = uVar8 + 1;
        } while ((local_50 & 0x3fffffff) != (uint)uVar8);
      }
    }
    else {
      local_62 = 0x2c;
      local_48 = 0;
      uStack_40 = 0;
      iVar2 = multiByteToWideString((undefined2 *)&local_48,(char *)&local_62,2,0);
      if (iVar2 < 1) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = findNext((ConstString *)&local_60,(ulong)param_2,(ushort)local_48,0,0xffffffff);
        uVar8 = uVar8 & 0xffffffff;
LAB_0017e19c:
        uVar5 = (uint)uVar8;
        if ((-1 < (int)uVar5) && (param_2 <= uVar5)) {
          uVar7 = local_50 & 0x3fffffff;
          if (uVar7 <= uVar5) {
            uVar3 = Steinberg::String::resize
                              ((String *)&local_60,uVar5 + 1,local_50 >> 0x1e & 1,'\x01');
            if ((char)uVar3 == '\0') goto LAB_0017e25b;
            uVar7 = uVar5 + 1 & 0x3fffffff;
            local_50 = local_50 & 0xc0000000 | uVar7;
          }
          if ((uVar5 < uVar7) && (local_58 != (undefined *)0x0)) {
            if ((local_50 & 0x40000000) == 0) {
              local_58[uVar8 & 0xffffffff] = 0x2e;
            }
            else {
              local_62 = 0x2e;
              local_48 = 0;
              uStack_40 = 0;
                    /* try { // try from 0017e385 to 0017e39a has its CatchHandler @ 0017e3cb */
              iVar2 = multiByteToWideString((undefined2 *)&local_48,(char *)&local_62,2,0);
              if (0 < iVar2) {
                *(ushort *)(local_58 + (uVar8 & 0xffffffff) * 2) = (ushort)local_48;
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((local_50 & 0x40000000) == 0) {
                    /* try { // try from 0017e0b6 to 0017e25a has its CatchHandler @ 0017e3cb */
      uVar8 = findNext((ConstString *)&local_60,param_2,',',0,0xffffffff);
      uVar8 = uVar8 & 0xffffffff;
LAB_0017e0d2:
      uVar5 = (uint)uVar8;
      if ((-1 < (int)uVar5) && (param_2 <= uVar5)) {
        uVar7 = local_50 & 0x3fffffff;
        if (uVar7 <= uVar5) {
          uVar3 = Steinberg::String::resize
                            ((String *)&local_60,uVar5 + 1,local_50 >> 0x1e & 1,'\x01');
          if ((char)uVar3 == '\0') goto LAB_0017e24f;
          uVar7 = uVar5 + 1 & 0x3fffffff;
          local_50 = local_50 & 0xc0000000 | uVar7;
        }
        if ((uVar5 < uVar7) && (local_58 != (undefined *)0x0)) {
          if ((local_50 & 0x40000000) == 0) {
            local_58[uVar8] = 0x2e;
          }
          else {
            *(undefined2 *)(local_58 + uVar8 * 2) = 0x2e;
          }
        }
      }
    }
    else {
      uVar8 = 0;
      if (-1 < (int)param_2) {
        uVar8 = (ulong)param_2;
      }
      if ((uint)uVar8 < (local_50 & 0x3fffffff)) {
        do {
          if (*(short *)(local_58 + uVar8 * 2) == 0x2c) goto LAB_0017e0d2;
          uVar5 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar5;
        } while ((local_50 & 0x3fffffff) != uVar5);
      }
    }
LAB_0017e24f:
    Steinberg::String::toMultiByte((String *)&local_60,0);
  }
LAB_0017e25b:
  if ((local_50 & 0x40000000) == 0) {
    puVar6 = &DAT_005dae18;
    if (local_58 != (undefined *)0x0) {
      puVar6 = local_58;
    }
LAB_0017e27a:
    puVar4 = puVar6;
  }
  else {
    puVar4 = &DAT_005dae18;
    if ((local_58 != (undefined *)0x0) && ((local_50 & 0x3fffffff) != 0)) {
                    /* try { // try from 0017e2dd to 0017e2e8 has its CatchHandler @ 0017e3b8 */
      Steinberg::String::toMultiByte((String *)&local_60,0);
      puVar4 = &DAT_005dae18;
      puVar6 = local_58;
      if (local_58 == (undefined *)0x0) {
        puVar6 = &DAT_005dae18;
      }
      if ((local_50 & 0x40000000) == 0) goto LAB_0017e27a;
    }
  }
  puVar6 = puVar4 + param_2;
  if (param_3 == '\0') {
    if (puVar4[param_2] == '\0') {
      uVar8 = 0;
    }
    else {
      iVar2 = __isoc99_sscanf(puVar6,&DAT_005db3a9,param_1);
      uVar8 = CONCAT71((int7)(uVar8 >> 8),iVar2 == 1);
    }
  }
  else if (puVar4[param_2] == '\0') {
    uVar8 = 0;
  }
  else {
    do {
      iVar2 = __isoc99_sscanf(puVar6,&DAT_005db3a9,param_1);
      uVar8 = CONCAT71((int7)(uVar8 >> 8),iVar2 == 1);
      if (iVar2 == 1) break;
      pcVar1 = puVar6 + 1;
      puVar6 = puVar6 + 1;
    } while (*pcVar1 != '\0');
  }
  if (local_58 != (undefined *)0x0) {
    local_60 = &PTR__String_00702c10;
    free(local_58);
  }
LAB_0017e352:
  return uVar8 & 0xffffffff;
}


