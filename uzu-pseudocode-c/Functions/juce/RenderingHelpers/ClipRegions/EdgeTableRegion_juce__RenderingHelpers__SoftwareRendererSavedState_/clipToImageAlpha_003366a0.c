// Function : clipToImageAlpha
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003366a0
// Prototype: long * clipToImageAlpha(long * param_1, long param_2, long * param_3, float * param_4, int param_5)
// Body     : 003366a0 - 00336fd4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToImageAlpha(juce::Image
   const&, juce::AffineTransform const&, juce::Graphics::ResamplingQuality) */

long * __cdecl
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToImageAlpha
          (long *param_1,long param_2,long *param_3,float *param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte *__ptr;
  size_t sVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  long local_120 [2];
  int local_10c;
  int local_104;
  uint local_100;
  long *local_f8;
  EdgeTable *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_a8;
  int local_a4;
  long *local_a0;
  long *local_98;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  byte *local_70;
  size_t local_68;
  void *local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  plVar2 = (long *)*param_3;
  if (plVar2 == (long *)0x0) {
    local_104 = 0;
    local_100 = 0;
  }
  else {
    local_104 = (int)plVar2[2];
    local_100 = *(uint *)((long)plVar2 + 0x14);
  }
  local_f8 = (long *)0x0;
                    /* try { // try from 003366ef to 003366fd has its CatchHandler @ 00336fd5 */
  (**(code **)(*plVar2 + 0x38))(plVar2,local_120,0,0,0);
  uVar3 = local_100;
  iVar4 = local_104;
  fVar11 = param_4[1];
  fVar12 = param_4[3];
  fVar13 = param_4[4];
  if (((((fVar11 != 0.0) || (NAN(fVar11))) || (fVar12 != 0.0)) ||
      ((NAN(fVar12) || (*param_4 != DAT_005d9038)))) ||
     ((fVar13 != DAT_005d9038 || (NAN(fVar13) || NAN(DAT_005d9038))))) {
LAB_00336769:
    fVar11 = *param_4 * fVar13 - fVar11 * fVar12;
    if ((fVar11 != 0.0) || (NAN(fVar11))) {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = (void *)0x0;
      uStack_50 = 0;
      local_38 = 1;
      Path::addRectangle(0.0,0.0,(float)local_104,(float)(int)local_100,(Path *)&local_58);
      EdgeTable::EdgeTable
                ((EdgeTable *)&local_e8,*(undefined8 *)(param_2 + 0x20),
                 *(undefined8 *)(param_2 + 0x28),(undefined8 *)&local_58,param_4);
      local_f0 = (EdgeTable *)(param_2 + 0x10);
      EdgeTable::clipToEdgeTable((EdgeTable *)(param_2 + 0x10),(long *)&local_e8);
      free(local_e8);
      uStack_50 = uStack_50 & 0xffffffff;
      free(local_58);
      if (*(char *)(param_2 + 0x38) == '\0') {
        iVar4 = *(int *)(param_2 + 0x2c);
        if (iVar4 != 0) {
LAB_00336a2a:
          local_8c = param_5;
          if ((*param_3 == 0) || (*(int *)(*param_3 + 0xc) != 2)) {
            fVar11 = *param_4 * param_4[4] - param_4[3] * param_4[1];
            dVar15 = (double)fVar11;
            dVar16 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar15 >> 0x20),
                                      _DAT_005d91b0 & SUB84(dVar15,0));
            if (dVar16 == DAT_005d94e0) {
              if ((fVar11 == 0.0) && (!NAN(fVar11))) goto LAB_00336c63;
LAB_00336bb6:
              dVar15 = _DAT_005d9000 / dVar15;
              fVar14 = (float)((double)param_4[4] * dVar15);
              fVar13 = (float)((double)(float)((uint)param_4[3] ^ _DAT_006524b0) * dVar15);
              fVar12 = (float)((double)(float)((uint)param_4[1] ^ _DAT_006524b0) * dVar15);
              fVar11 = (float)((double)*param_4 * dVar15);
              local_e8 = (void *)CONCAT44(fVar12,fVar14);
              uStack_e0 = CONCAT44(fVar13,(float)((uint)param_4[2] ^ _DAT_006524b0) * fVar14 -
                                          fVar12 * param_4[5]);
              local_d8 = CONCAT44((float)((uint)param_4[2] ^ _DAT_006524b0) * fVar13 -
                                  param_4[5] * fVar11,fVar11);
            }
            else {
              if ((DAT_005db368 < dVar16) && (DAT_005db370 * dVar16 < dVar16)) goto LAB_00336bb6;
LAB_00336c63:
              local_d8 = *(undefined8 *)(param_4 + 4);
              local_e8 = *(void **)param_4;
              uStack_e0 = *(undefined8 *)(param_4 + 2);
            }
            local_a8 = 0;
            if (param_5 != 0) {
              local_a8 = DAT_005d9044;
            }
            local_a4 = (uint)(param_5 == 0) * 0x80 + -0x80;
            local_a0 = local_120;
            local_90 = 0x100;
            local_88 = local_104 + -1;
            local_84 = local_100 - 1;
            local_68 = 0x800;
            local_98 = local_a0;
            __ptr = malloc(0x800);
            local_70 = __ptr;
            if (0 < iVar4) {
              iVar4 = 1;
              sVar6 = 0x800;
              while( true ) {
                iVar7 = *(int *)(param_2 + 0x20);
                iVar9 = *(int *)(param_2 + 0x24);
                iVar1 = *(int *)(param_2 + 0x28);
                if ((int)sVar6 < iVar1) {
                  local_68 = (long)iVar1;
                  free(__ptr);
                  if (iVar1 == 0) {
                    __ptr = (byte *)0x0;
                  }
                  else {
                    __ptr = malloc((long)iVar1);
                  }
                  local_70 = __ptr;
                }
                iVar9 = iVar9 + iVar4 + -1;
                local_80 = iVar9;
                EdgeTableFillers::TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false>::
                generate<juce::PixelAlpha>
                          ((TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false> *)
                           &local_e8,__ptr,iVar7,iVar1);
                __ptr = local_70;
                EdgeTable::clipLineToMask(local_f0,iVar7,iVar9,local_70,1,iVar1);
                if (*(int *)(param_2 + 0x2c) <= iVar4) break;
                iVar4 = iVar4 + 1;
                sVar6 = local_68;
              }
            }
          }
          else {
            fVar11 = *param_4 * param_4[4] - param_4[3] * param_4[1];
            dVar15 = (double)fVar11;
            dVar16 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar15 >> 0x20),
                                      _DAT_005d91b0 & SUB84(dVar15,0));
            if (dVar16 == DAT_005d94e0) {
              if ((fVar11 == 0.0) && (!NAN(fVar11))) goto LAB_00336de6;
LAB_00336aac:
              dVar15 = _DAT_005d9000 / dVar15;
              fVar14 = (float)((double)param_4[4] * dVar15);
              fVar13 = (float)((double)(float)((uint)param_4[3] ^ _DAT_006524b0) * dVar15);
              fVar12 = (float)((double)(float)((uint)param_4[1] ^ _DAT_006524b0) * dVar15);
              fVar11 = (float)((double)*param_4 * dVar15);
              local_e8 = (void *)CONCAT44(fVar12,fVar14);
              uStack_e0 = CONCAT44(fVar13,(float)((uint)param_4[2] ^ _DAT_006524b0) * fVar14 -
                                          fVar12 * param_4[5]);
              local_d8 = CONCAT44((float)((uint)param_4[2] ^ _DAT_006524b0) * fVar13 -
                                  param_4[5] * fVar11,fVar11);
            }
            else {
              if ((DAT_005db368 < dVar16) && (DAT_005db370 * dVar16 < dVar16)) goto LAB_00336aac;
LAB_00336de6:
              local_d8 = *(undefined8 *)(param_4 + 4);
              local_e8 = *(void **)param_4;
              uStack_e0 = *(undefined8 *)(param_4 + 2);
            }
            local_a8 = 0;
            if (param_5 != 0) {
              local_a8 = DAT_005d9044;
            }
            local_a4 = (uint)(param_5 == 0) * 0x80 + -0x80;
            local_a0 = local_120;
            local_90 = 0x100;
            local_88 = local_104 + -1;
            local_84 = local_100 - 1;
            local_68 = 0x800;
            local_98 = local_a0;
            __ptr = malloc(0x2000);
            local_70 = __ptr;
            if (0 < iVar4) {
              iVar4 = 1;
              sVar6 = 0x800;
              while( true ) {
                iVar7 = *(int *)(param_2 + 0x20);
                iVar9 = *(int *)(param_2 + 0x24);
                iVar1 = *(int *)(param_2 + 0x28);
                if ((int)sVar6 < iVar1) {
                  local_68 = (long)iVar1;
                  free(__ptr);
                  if (iVar1 == 0) {
                    __ptr = (byte *)0x0;
                  }
                  else {
                    __ptr = malloc((long)iVar1 * 4);
                  }
                  local_70 = __ptr;
                }
                iVar9 = iVar9 + iVar4 + -1;
                local_80 = iVar9;
                EdgeTableFillers::TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>::
                generate<juce::PixelARGB>
                          ((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> *)&local_e8,
                           (undefined4 *)__ptr,iVar7,iVar1);
                __ptr = local_70;
                EdgeTable::clipLineToMask(local_f0,iVar7,iVar9,local_70 + 3,4,iVar1);
                if (*(int *)(param_2 + 0x2c) <= iVar4) break;
                iVar4 = iVar4 + 1;
                sVar6 = local_68;
              }
            }
          }
          free(__ptr);
        }
      }
      else {
        *(undefined1 *)(param_2 + 0x38) = 0;
        iVar4 = *(int *)(param_2 + 0x2c);
        if (0 < iVar4) {
          piVar5 = *(int **)(param_2 + 0x10);
          iVar7 = iVar4 + 1;
          do {
            if (1 < *piVar5) goto LAB_00336a2a;
            iVar7 = iVar7 + -1;
            piVar5 = piVar5 + *(int *)(param_2 + 0x34);
          } while (1 < iVar7);
        }
        *(undefined4 *)(param_2 + 0x2c) = 0;
      }
      if (*(char *)(param_2 + 0x38) != '\0') {
        *(undefined1 *)(param_2 + 0x38) = 0;
        if (0 < *(int *)(param_2 + 0x2c)) {
          piVar5 = *(int **)(param_2 + 0x10);
          iVar4 = *(int *)(param_2 + 0x2c) + 1;
          do {
            if (1 < *piVar5) goto LAB_00336fbb;
            iVar4 = iVar4 + -1;
            piVar5 = piVar5 + *(int *)(param_2 + 0x34);
          } while (1 < iVar4);
        }
        goto LAB_00336f90;
      }
      if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00336fbb;
    }
LAB_00336784:
    *param_1 = 0;
  }
  else {
    if ((param_5 != 0) &&
       ((((int)(DAT_005de53c * param_4[5]) | (int)(param_4[2] * DAT_005de53c)) & 0xe0U) != 0))
    goto LAB_00336769;
    iVar9 = (int)((int)(param_4[2] * DAT_005de53c) + 0x80U) >> 8;
    iVar7 = (int)((int)(DAT_005de53c * param_4[5]) + 0x80U) >> 8;
    if ((*param_3 == 0) || (*(int *)(*param_3 + 0xc) != 2)) {
      uVar10 = (ulong)local_100;
      EdgeTable::clipToRectangle
                ((long *)(param_2 + 0x10),CONCAT44(iVar7,iVar9),CONCAT44(local_100,local_104));
      if (0 < (int)uVar3) {
        uVar8 = 0;
        do {
          EdgeTable::clipLineToMask
                    ((EdgeTable *)(param_2 + 0x10),iVar9,(int)uVar8 + iVar7,
                     (byte *)((long)local_10c * uVar8 + local_120[0]),1,iVar4);
          uVar8 = uVar8 + 1;
        } while (uVar10 != uVar8);
      }
    }
    else {
      uVar10 = (ulong)local_100;
      EdgeTable::clipToRectangle
                ((long *)(param_2 + 0x10),CONCAT44(iVar7,iVar9),CONCAT44(local_100,local_104));
      if (0 < (int)uVar3) {
        uVar8 = 0;
        do {
          EdgeTable::clipLineToMask
                    ((EdgeTable *)(param_2 + 0x10),iVar9,iVar7 + (int)uVar8,
                     (byte *)((long)local_10c * uVar8 + local_120[0] + 3),4,iVar4);
          uVar8 = uVar8 + 1;
        } while (uVar10 != uVar8);
      }
    }
    if (*(char *)(param_2 + 0x38) == '\0') {
      if (*(int *)(param_2 + 0x2c) == 0) goto LAB_00336784;
LAB_00336fbb:
      *param_1 = param_2;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      goto joined_r0x00336fa6;
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
    if (0 < *(int *)(param_2 + 0x2c)) {
      piVar5 = *(int **)(param_2 + 0x10);
      iVar4 = *(int *)(param_2 + 0x2c) + 1;
      do {
        if (1 < *piVar5) goto LAB_00336fbb;
        iVar4 = iVar4 + -1;
        piVar5 = piVar5 + *(int *)(param_2 + 0x34);
      } while (1 < iVar4);
    }
LAB_00336f90:
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *param_1 = 0;
  }
joined_r0x00336fa6:
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  return param_1;
}


