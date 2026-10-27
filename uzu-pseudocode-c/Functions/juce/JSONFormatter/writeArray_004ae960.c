// Function : writeArray
// Namespace: juce:JSONFormatter
// Entry    : 004ae960
// Prototype: undefined writeArray(long * param_1, long * param_2, int * param_3)
// Body     : 004ae960 - 004aeea2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JSONFormatter::writeArray(juce::OutputStream&, juce::Array<juce::var,
   juce::DummyCriticalSection, 0> const&, juce::JSON::FormatOptions const&) */

void __cdecl juce::JSONFormatter::writeArray(long *param_1,long *param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 local_40;
  undefined8 local_38;
  
  (**(code **)(*param_1 + 0x30))(param_1,0x5b);
  iVar4 = *(int *)((long)param_2 + 0xc);
  if (iVar4 == 0) goto LAB_004aee86;
  if (*param_3 == 2) {
    lVar13 = 0;
    pbVar5 = (byte *)param_1[1];
LAB_004ae9b3:
    pbVar6 = pbVar5 + 1;
    bVar1 = *pbVar5;
    uVar8 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar8 = uVar8 & 0x7f;
        if ((bVar1 & 0x7f) == 0) goto LAB_004aeae1;
        goto LAB_004aeaa4;
      }
      if ((bVar1 & 0x20) == 0) {
        uVar10 = 0x3f;
        lVar9 = 0;
        bVar2 = false;
        bVar3 = false;
      }
      else {
        bVar2 = true;
        if ((bVar1 & 0x10) == 0) {
          uVar10 = 0x1f;
          lVar9 = 1;
          bVar3 = false;
        }
        else {
          uVar10 = 0xf;
          lVar9 = 2;
          bVar3 = true;
        }
      }
      uVar8 = uVar8 & uVar10;
      if ((pbVar5[1] & 0xc0) == 0x80) {
        pbVar7 = pbVar5 + lVar9 + 2;
        uVar8 = pbVar5[1] & 0x3f | uVar8 << 6;
        pbVar6 = pbVar7;
        if (!bVar2) goto joined_r0x004ae9c3;
        pbVar6 = pbVar5 + 2;
        if ((*pbVar6 & 0xc0) != 0x80) {
          if (uVar8 != 0) goto LAB_004aeaa4;
LAB_004aeae1:
          (**(code **)(*param_1 + 0x28))(param_1,(byte *)param_1[1],lVar13);
          iVar4 = *(int *)((long)param_2 + 0xc);
          goto LAB_004aeaee;
        }
        uVar8 = *pbVar6 & 0x3f | uVar8 << 6;
        pbVar6 = pbVar7;
        if (bVar3) {
          uVar10 = (uint)pbVar5[3];
          pbVar6 = pbVar5 + 3;
          if ((uVar10 & 0xffffffc0) == 0x80) {
            uVar8 = uVar8 << 6 | uVar10 & 0x3f;
            pbVar6 = pbVar7;
          }
        }
      }
    }
joined_r0x004ae9c3:
    if (uVar8 == 0) goto LAB_004aeae1;
LAB_004aeaa4:
    lVar9 = 1;
    if ((0x7f < uVar8) && (lVar9 = 2, 0x7ff < uVar8)) {
      lVar9 = 4 - (ulong)(uVar8 < 0x10000);
    }
    lVar13 = lVar13 + lVar9;
    pbVar5 = pbVar6;
    goto LAB_004ae9b3;
  }
LAB_004aeaee:
  if (0 < iVar4) {
    lVar13 = 0;
    do {
      if (*param_3 == 2) {
        (**(code **)(*param_1 + 0x90))(param_1,0x20,(long)param_3[3] + 2);
      }
      local_40 = *(undefined8 *)param_3;
      local_38 = CONCAT44(param_3[3] + 2,param_3[2]);
      JSON::writeToStream(param_1,(var *)(lVar13 * 0x10 + *param_2),(int *)&local_40);
      if (lVar13 < (long)*(int *)((long)param_2 + 0xc) + -1) {
        (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e5e2e,1);
        if (*param_3 == 2) {
          pbVar5 = (byte *)param_1[1];
          lVar9 = 0;
          pbVar6 = pbVar5;
LAB_004aed33:
          pbVar7 = pbVar6 + 1;
          bVar1 = *pbVar6;
          uVar8 = (uint)bVar1;
          if ((char)bVar1 < '\0') {
            if ((bVar1 & 0x40) == 0) {
              uVar8 = uVar8 & 0x7f;
              if ((bVar1 & 0x7f) == 0) goto LAB_004aeb00;
              goto LAB_004aee28;
            }
            if ((bVar1 & 0x20) == 0) {
              uVar10 = 0x3f;
              lVar11 = 0;
              bVar2 = false;
              bVar3 = false;
            }
            else {
              bVar2 = true;
              if ((bVar1 & 0x10) == 0) {
                uVar10 = 0x1f;
                lVar11 = 1;
                bVar3 = false;
              }
              else {
                uVar10 = 0xf;
                lVar11 = 2;
                bVar3 = true;
              }
            }
            uVar8 = uVar8 & uVar10;
            if ((pbVar6[1] & 0xc0) == 0x80) {
              pbVar12 = pbVar6 + lVar11 + 2;
              uVar8 = pbVar6[1] & 0x3f | uVar8 << 6;
              pbVar7 = pbVar12;
              if (bVar2) {
                pbVar7 = pbVar6 + 2;
                if ((*pbVar7 & 0xc0) == 0x80) {
                  uVar8 = *pbVar7 & 0x3f | uVar8 << 6;
                  pbVar7 = pbVar12;
                  if (bVar3) {
                    uVar10 = (uint)pbVar6[3];
                    pbVar7 = pbVar6 + 3;
                    if ((uVar10 & 0xffffffc0) == 0x80) {
                      uVar8 = uVar8 << 6 | uVar10 & 0x3f;
                      pbVar7 = pbVar12;
                    }
                  }
                  goto joined_r0x004aee22;
                }
                if (uVar8 != 0) goto LAB_004aee28;
LAB_004aeb00:
                (**(code **)(*param_1 + 0x28))(param_1,pbVar5,lVar9);
                goto LAB_004aeb09;
              }
            }
          }
joined_r0x004aee22:
          if (uVar8 == 0) goto LAB_004aeb00;
LAB_004aee28:
          lVar11 = 1;
          if ((0x7f < uVar8) && (lVar11 = 2, 0x7ff < uVar8)) {
            lVar11 = 4 - (ulong)(uVar8 < 0x10000);
          }
          lVar9 = lVar9 + lVar11;
          pbVar6 = pbVar7;
          goto LAB_004aed33;
        }
        if (*param_3 == 1) {
          (**(code **)(*param_1 + 0x30))(param_1,0x20);
        }
      }
      else if (*param_3 == 2) {
        pbVar5 = (byte *)param_1[1];
        lVar9 = 0;
        pbVar6 = pbVar5;
LAB_004aebe3:
        pbVar7 = pbVar6 + 1;
        bVar1 = *pbVar6;
        uVar8 = (uint)bVar1;
        if ((char)bVar1 < '\0') {
          if ((bVar1 & 0x40) == 0) {
            uVar8 = uVar8 & 0x7f;
            if ((bVar1 & 0x7f) == 0) goto LAB_004aeb00;
            goto LAB_004aecd8;
          }
          if ((bVar1 & 0x20) == 0) {
            uVar10 = 0x3f;
            lVar11 = 0;
            bVar2 = false;
            bVar3 = false;
          }
          else {
            bVar2 = true;
            if ((bVar1 & 0x10) == 0) {
              uVar10 = 0x1f;
              lVar11 = 1;
              bVar3 = false;
            }
            else {
              uVar10 = 0xf;
              lVar11 = 2;
              bVar3 = true;
            }
          }
          uVar8 = uVar8 & uVar10;
          if ((pbVar6[1] & 0xffffffc0) == 0x80) {
            pbVar12 = pbVar6 + lVar11 + 2;
            uVar8 = pbVar6[1] & 0x3f | uVar8 << 6;
            pbVar7 = pbVar12;
            if (!bVar2) goto joined_r0x004aecc4;
            pbVar7 = pbVar6 + 2;
            if ((*pbVar7 & 0xc0) != 0x80) {
              if (uVar8 != 0) goto LAB_004aecd8;
              goto LAB_004aeb00;
            }
            uVar8 = *pbVar7 & 0x3f | uVar8 << 6;
            pbVar7 = pbVar12;
            if (bVar3) {
              pbVar7 = pbVar6 + 3;
              if ((*pbVar7 & 0xffffffc0) == 0x80) {
                uVar8 = uVar8 << 6 | *pbVar7 & 0x3f;
                pbVar7 = pbVar12;
              }
            }
          }
        }
joined_r0x004aecc4:
        if (uVar8 == 0) goto LAB_004aeb00;
LAB_004aecd8:
        lVar11 = 1;
        if ((0x7f < uVar8) && (lVar11 = 2, 0x7ff < uVar8)) {
          lVar11 = 4 - (ulong)(uVar8 < 0x10000);
        }
        lVar9 = lVar9 + lVar11;
        pbVar6 = pbVar7;
        goto LAB_004aebe3;
      }
LAB_004aeb09:
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)((long)param_2 + 0xc));
  }
  if (*param_3 == 2) {
    (**(code **)(*param_1 + 0x90))(param_1,0x20,(long)param_3[3]);
  }
LAB_004aee86:
  (**(code **)(*param_1 + 0x30))(param_1,0x5d);
  return;
}


