// Function : loadPathFromData
// Namespace: juce:Path
// Entry    : 002f41c0
// Prototype: undefined loadPathFromData(Path * this, undefined8 param_1, undefined8 param_2)
// Body     : 002f41c0 - 002f4479


/* juce::Path::loadPathFromData(void const*, unsigned long) */

void __thiscall juce::Path::loadPathFromData(Path *this,undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  uint uVar6;
  undefined **ppuVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  void *pvStack_38;
  undefined8 local_30;
  float local_28;
  float local_24;
  
  local_58 = &PTR__MemoryInputStream_007132a0;
  local_40 = 0;
  pvStack_38 = (void *)0x0;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_2;
  uVar4 = MemoryInputStream::isExhausted((MemoryInputStream *)&local_58);
  if ((char)uVar4 == '\0') {
    ppuVar7 = &PTR__MemoryInputStream_007132a0;
    do {
                    /* try { // try from 002f4220 to 002f444a has its CatchHandler @ 002f447a */
      uVar1 = (*(code *)ppuVar7[5])(&local_58);
      switch(uVar1) {
      case 0x62:
        fVar8 = (float)(*(code *)local_58[0xd])(&local_58);
        fVar9 = (float)(*(code *)local_58[0xd])(&local_58);
        fVar10 = (float)(*(code *)local_58[0xd])(&local_58);
        local_24 = (float)(*(code *)local_58[0xd])(&local_58);
        local_28 = (float)(*(code *)local_58[0xd])(&local_58);
        fVar11 = (float)(*(code *)local_58[0xd])(&local_58);
        cubicTo(fVar8,fVar9,fVar10,local_24,local_28,fVar11,this);
        break;
      case 99:
        iVar3 = *(int *)(this + 0xc);
        if (iVar3 != 0) {
          if (0 < iVar3) {
            fVar8 = *(float *)(*(long *)this + (ulong)(iVar3 - 1) * 4);
            if ((fVar8 == DAT_005de41c) && (!NAN(fVar8) && !NAN(DAT_005de41c))) break;
          }
          if ((int)*(uint *)(this + 8) <= iVar3) {
            uVar6 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
            if (*(uint *)(this + 8) != uVar6) {
              if ((int)uVar6 < 1) {
                free(*(void **)this);
                *(undefined8 *)this = 0;
              }
              else {
                pvVar5 = realloc(*(void **)this,(ulong)uVar6 << 2);
                *(void **)this = pvVar5;
              }
            }
            *(uint *)(this + 8) = uVar6;
            iVar3 = *(int *)(this + 0xc);
          }
          *(int *)(this + 0xc) = iVar3 + 1;
          *(undefined4 *)(*(long *)this + (long)iVar3 * 4) = 0x47c35280;
        }
        break;
      case 0x65:
        goto switchD_002f423c_caseD_65;
      case 0x6c:
        fVar8 = (float)(*(code *)local_58[0xd])(&local_58);
        fVar9 = (float)(*(code *)local_58[0xd])(&local_58);
        lineTo(fVar8,fVar9,this);
        break;
      case 0x6d:
        fVar8 = (float)(*(code *)local_58[0xd])(&local_58);
        fVar9 = (float)(*(code *)local_58[0xd])(&local_58);
        startNewSubPath(fVar8,fVar9,this);
        break;
      case 0x6e:
        this[0x20] = (Path)0x1;
        break;
      case 0x71:
        fVar8 = (float)(*(code *)local_58[0xd])(&local_58);
        fVar9 = (float)(*(code *)local_58[0xd])(&local_58);
        fVar10 = (float)(*(code *)local_58[0xd])(&local_58);
        fVar11 = (float)(*(code *)local_58[0xd])(&local_58);
        quadraticTo(fVar8,fVar9,fVar10,fVar11,this);
        break;
      case 0x7a:
        this[0x20] = (Path)0x0;
      }
      cVar2 = (*(code *)local_58[3])(&local_58);
      if (cVar2 != '\0') goto switchD_002f423c_caseD_65;
      ppuVar7 = local_58;
    } while( true );
  }
  pvVar5 = (void *)0x0;
LAB_002f445e:
  local_58 = &PTR__MemoryInputStream_007132a0;
  free(pvVar5);
  return;
switchD_002f423c_caseD_65:
  pvVar5 = pvStack_38;
  goto LAB_002f445e;
}


