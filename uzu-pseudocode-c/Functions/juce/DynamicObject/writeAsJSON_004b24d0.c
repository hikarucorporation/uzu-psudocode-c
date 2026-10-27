// Function : writeAsJSON
// Namespace: juce:DynamicObject
// Entry    : 004b24d0
// Prototype: undefined writeAsJSON(DynamicObject * this, long * param_1, int * param_2)
// Body     : 004b24d0 - 004b2b4d


/* juce::DynamicObject::writeAsJSON(juce::OutputStream&, juce::JSON::FormatOptions const&) */

void __thiscall juce::DynamicObject::writeAsJSON(DynamicObject *this,long *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  byte *pbVar11;
  var *pvVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined8 local_40;
  undefined8 local_38;
  
  (**(code **)(*param_1 + 0x30))(param_1,0x7b);
  if (*param_2 != 2) {
LAB_004b264b:
    uVar7 = *(uint *)(this + 0x1c);
    if (0 < (int)uVar7) {
      uVar15 = 0;
      do {
        if (*param_2 == 2) {
          (**(code **)(*param_1 + 0x90))(param_1,0x20,(long)param_2[3] + 2);
        }
        (**(code **)(*param_1 + 0x30))(param_1,0x22);
        pbVar11 = &DAT_0061ac58;
        if ((uVar15 < *(uint *)(this + 0x1c)) &&
           (pbVar11 = *(byte **)(*(long *)(this + 0x10) + uVar15 * 0x18), pbVar11 != &DAT_0061ac58))
        {
          LOCK();
          *(int *)(pbVar11 + -0x10) = *(int *)(pbVar11 + -0x10) + 1;
          UNLOCK();
        }
                    /* try { // try from 004b26f4 to 004b26fe has its CatchHandler @ 004b2b4e */
        JSONFormatter::writeString(param_1,pbVar11,param_2[1]);
        pbVar11 = pbVar11 + -0x10;
        if (pbVar11 != (byte *)&emptyString) {
          LOCK();
          iVar4 = *(int *)pbVar11;
          *(int *)pbVar11 = *(int *)pbVar11 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            operator_delete__(pbVar11);
          }
        }
        (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e5e93,2);
        if (*param_2 != 0) {
          (**(code **)(*param_1 + 0x30))(param_1,0x20);
        }
        if (uVar15 < *(uint *)(this + 0x1c)) {
          pvVar12 = (var *)(*(long *)(this + 0x10) + uVar15 * 0x18 + 8);
        }
        else {
          pvVar12 = (var *)&getNullVarRef()::nullVar;
          if (getNullVarRef()::nullVar == '\0') {
            iVar4 = __cxa_guard_acquire(&getNullVarRef()::nullVar);
            pvVar12 = (var *)&getNullVarRef()::nullVar;
            if (iVar4 != 0) {
              getNullVarRef()::nullVar = &var::Instance::attributesVoid;
              __cxa_atexit(var::~var,&getNullVarRef()::nullVar,&__dso_handle);
              __cxa_guard_release(&getNullVarRef()::nullVar);
              pvVar12 = (var *)&getNullVarRef()::nullVar;
            }
          }
        }
        local_40 = *(undefined8 *)param_2;
        local_38 = CONCAT44(param_2[3] + 2,param_2[2]);
        JSON::writeToStream(param_1,pvVar12,(int *)&local_40);
        if (uVar15 < uVar7 - 1) {
          (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e5e2e,1);
          if (*param_2 == 2) {
            pbVar11 = (byte *)param_1[1];
            lVar9 = 0;
            pbVar5 = pbVar11;
LAB_004b2983:
            pbVar6 = pbVar5 + 1;
            bVar1 = *pbVar5;
            uVar8 = (uint)bVar1;
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0x40) == 0) {
                uVar8 = uVar8 & 0x7f;
                if ((bVar1 & 0x7f) == 0) goto LAB_004b2670;
                goto LAB_004b2a78;
              }
              if ((bVar1 & 0x20) == 0) {
                uVar10 = 0x3f;
                lVar13 = 0;
                bVar2 = false;
                bVar3 = false;
              }
              else {
                bVar2 = true;
                if ((bVar1 & 0x10) == 0) {
                  uVar10 = 0x1f;
                  lVar13 = 1;
                  bVar3 = false;
                }
                else {
                  uVar10 = 0xf;
                  lVar13 = 2;
                  bVar3 = true;
                }
              }
              uVar8 = uVar8 & uVar10;
              if ((pbVar5[1] & 0xc0) == 0x80) {
                pbVar14 = pbVar5 + lVar13 + 2;
                uVar8 = pbVar5[1] & 0x3f | uVar8 << 6;
                pbVar6 = pbVar14;
                if (bVar2) {
                  pbVar6 = pbVar5 + 2;
                  if ((*pbVar6 & 0xc0) == 0x80) {
                    uVar8 = *pbVar6 & 0x3f | uVar8 << 6;
                    pbVar6 = pbVar14;
                    if (bVar3) {
                      uVar10 = (uint)pbVar5[3];
                      pbVar6 = pbVar5 + 3;
                      if ((uVar10 & 0xffffffc0) == 0x80) {
                        uVar8 = uVar8 << 6 | uVar10 & 0x3f;
                        pbVar6 = pbVar14;
                      }
                    }
                    goto joined_r0x004b2a72;
                  }
                  if (uVar8 != 0) goto LAB_004b2a78;
LAB_004b2670:
                  (**(code **)(*param_1 + 0x28))(param_1,pbVar11,lVar9);
                  goto LAB_004b267a;
                }
              }
            }
joined_r0x004b2a72:
            if (uVar8 == 0) goto LAB_004b2670;
LAB_004b2a78:
            lVar13 = 1;
            if ((0x7f < uVar8) && (lVar13 = 2, 0x7ff < uVar8)) {
              lVar13 = 4 - (ulong)(uVar8 < 0x10000);
            }
            lVar9 = lVar9 + lVar13;
            pbVar5 = pbVar6;
            goto LAB_004b2983;
          }
          if (*param_2 == 1) {
            (**(code **)(*param_1 + 0x30))(param_1,0x20);
          }
        }
        else if (*param_2 == 2) {
          pbVar11 = (byte *)param_1[1];
          lVar9 = 0;
          pbVar5 = pbVar11;
LAB_004b2833:
          pbVar6 = pbVar5 + 1;
          bVar1 = *pbVar5;
          uVar8 = (uint)bVar1;
          if ((char)bVar1 < '\0') {
            if ((bVar1 & 0x40) == 0) {
              uVar8 = uVar8 & 0x7f;
              if ((bVar1 & 0x7f) == 0) goto LAB_004b2670;
              goto LAB_004b2928;
            }
            if ((bVar1 & 0x20) == 0) {
              uVar10 = 0x3f;
              lVar13 = 0;
              bVar2 = false;
              bVar3 = false;
            }
            else {
              bVar2 = true;
              if ((bVar1 & 0x10) == 0) {
                uVar10 = 0x1f;
                lVar13 = 1;
                bVar3 = false;
              }
              else {
                uVar10 = 0xf;
                lVar13 = 2;
                bVar3 = true;
              }
            }
            uVar8 = uVar8 & uVar10;
            if ((pbVar5[1] & 0xc0) == 0x80) {
              pbVar14 = pbVar5 + lVar13 + 2;
              uVar8 = pbVar5[1] & 0x3f | uVar8 << 6;
              pbVar6 = pbVar14;
              if (!bVar2) goto joined_r0x004b2914;
              pbVar6 = pbVar5 + 2;
              if ((*pbVar6 & 0xc0) != 0x80) {
                if (uVar8 != 0) goto LAB_004b2928;
                goto LAB_004b2670;
              }
              uVar8 = *pbVar6 & 0x3f | uVar8 << 6;
              pbVar6 = pbVar14;
              if (bVar3) {
                pbVar6 = pbVar5 + 3;
                if ((*pbVar6 & 0xffffffc0) == 0x80) {
                  uVar8 = uVar8 << 6 | *pbVar6 & 0x3f;
                  pbVar6 = pbVar14;
                }
              }
            }
          }
joined_r0x004b2914:
          if (uVar8 == 0) goto LAB_004b2670;
LAB_004b2928:
          lVar13 = 1;
          if ((0x7f < uVar8) && (lVar13 = 2, 0x7ff < uVar8)) {
            lVar13 = 4 - (ulong)(uVar8 < 0x10000);
          }
          lVar9 = lVar9 + lVar13;
          pbVar5 = pbVar6;
          goto LAB_004b2833;
        }
LAB_004b267a:
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar7);
    }
    if (*param_2 == 2) {
      (**(code **)(*param_1 + 0x90))(param_1,0x20,(long)param_2[3]);
    }
    (**(code **)(*param_1 + 0x30))(param_1,0x7d);
    return;
  }
  lVar9 = 0;
  pbVar11 = (byte *)param_1[1];
LAB_004b2513:
  pbVar5 = pbVar11 + 1;
  bVar1 = *pbVar11;
  uVar7 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0x40) == 0) {
      uVar7 = uVar7 & 0x7f;
      if ((bVar1 & 0x7f) == 0) goto LAB_004b2641;
      goto LAB_004b2604;
    }
    if ((bVar1 & 0x20) == 0) {
      uVar8 = 0x3f;
      lVar13 = 0;
      bVar2 = false;
      bVar3 = false;
    }
    else {
      bVar2 = true;
      if ((bVar1 & 0x10) == 0) {
        uVar8 = 0x1f;
        lVar13 = 1;
        bVar3 = false;
      }
      else {
        uVar8 = 0xf;
        lVar13 = 2;
        bVar3 = true;
      }
    }
    uVar7 = uVar7 & uVar8;
    if ((pbVar11[1] & 0xffffffc0) == 0x80) {
      pbVar6 = pbVar11 + lVar13 + 2;
      uVar7 = pbVar11[1] & 0x3f | uVar7 << 6;
      pbVar5 = pbVar6;
      if (!bVar2) goto joined_r0x004b2602;
      pbVar5 = pbVar11 + 2;
      if ((*pbVar5 & 0xc0) != 0x80) {
        if (uVar7 != 0) goto LAB_004b2604;
LAB_004b2641:
        (**(code **)(*param_1 + 0x28))(param_1,(byte *)param_1[1],lVar9);
        goto LAB_004b264b;
      }
      uVar7 = *pbVar5 & 0x3f | uVar7 << 6;
      pbVar5 = pbVar6;
      if (bVar3) {
        uVar8 = (uint)pbVar11[3];
        pbVar5 = pbVar11 + 3;
        if ((uVar8 & 0xffffffc0) == 0x80) {
          uVar7 = uVar7 << 6 | uVar8 & 0x3f;
          pbVar5 = pbVar6;
        }
      }
    }
  }
joined_r0x004b2602:
  if (uVar7 == 0) goto LAB_004b2641;
LAB_004b2604:
  lVar13 = 1;
  if ((0x7f < uVar7) && (lVar13 = 2, 0x7ff < uVar7)) {
    lVar13 = 4 - (ulong)(uVar7 < 0x10000);
  }
  lVar9 = lVar9 + lVar13;
  pbVar11 = pbVar5;
  goto LAB_004b2513;
}


