// Function : writeMetaInfo
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00196ca0
// Prototype: bool writeMetaInfo(PresetFile * this, char * param_1, ulong param_3_00, char param_3)
// Body     : 00196ca0 - 00196e44


/* Steinberg::Vst::PresetFile::writeMetaInfo(char const*, int, bool) */

bool __thiscall
Steinberg::Vst::PresetFile::writeMetaInfo
          (PresetFile *this,char *param_1,ulong param_3_00,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  PresetFile *pPVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long local_58;
  long alStack_50 [3];
  long local_38;
  
  sVar4 = param_3_00 & 0xffffffff;
  uVar1 = *(uint *)(this + 0xc28);
  if ((int)uVar1 < 1) {
    lVar7 = 0x30;
  }
  else {
    lVar7 = 0;
    do {
      if (*(int *)(this + lVar7 + 0x28) == 0x6f666e49) {
        if (param_3 == '\0') goto LAB_00196d8b;
        break;
      }
      lVar7 = lVar7 + 0x18;
    } while ((ulong)uVar1 * 0x18 != lVar7);
    pPVar5 = this + 0x30;
    uVar6 = 0;
    do {
      if (*(int *)(pPVar5 + -8) == 0x6f666e49) {
        if (uVar1 - 1 != uVar6) goto LAB_00196d8b;
        lVar7 = *(long *)pPVar5;
        *(uint *)(this + 0xc28) = uVar1 - 1;
        goto LAB_00196d3a;
      }
      uVar6 = uVar6 + 1;
      pPVar5 = pPVar5 + 0x18;
    } while (uVar1 != uVar6);
    lVar7 = *(long *)(this + (ulong)(uVar1 - 1) * 0x18 + 0x38) +
            *(long *)(this + (ulong)(uVar1 - 1) * 0x18 + 0x30);
  }
LAB_00196d3a:
  local_58 = -1;
  bVar8 = false;
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),lVar7,0,&local_58);
  if (local_58 == lVar7) {
    if ((int)param_3_00 == -1) {
      sVar4 = strlen(param_1);
    }
    alStack_50[0] = 0;
    alStack_50[1] = 0;
    if (*(int *)(this + 0xc28) < 0x80) {
      local_58 = 0x6f666e49;
      (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),alStack_50);
      alStack_50[1] = 0;
      bVar8 = false;
      iVar3 = (**(code **)(**(long **)(this + 8) + 0x20))
                        (*(long **)(this + 8),param_1,sVar4 & 0xffffffff,0);
      if ((iVar3 == 3) || (iVar3 == 0)) {
        iVar3 = *(int *)(this + 0xc28);
        if (iVar3 < 0x80) {
          local_38 = 0;
          (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),&local_38);
          iVar2 = *(int *)(this + 0xc28);
          *(int *)(this + 0xc28) = iVar2 + 1;
          *(long *)(this + (long)iVar2 * 0x18 + 0x38) = local_38 - alStack_50[0];
          *(long *)(this + (long)iVar2 * 0x18 + 0x28) = local_58;
          *(long *)(this + (long)iVar2 * 0x18 + 0x28 + 8) = alStack_50[0];
        }
        bVar8 = iVar3 < 0x80;
      }
    }
    else {
LAB_00196d8b:
      bVar8 = false;
    }
  }
  return bVar8;
}


