// Function : png_decompress_chunk
// Namespace: juce:pnglibNamespace
// Entry    : 003a3ef0
// Prototype: int png_decompress_chunk(pnglibNamespace * param_1, int param_2, uint param_3, ulong * param_4)
// Body     : 003a3ef0 - 003a42eb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_decompress_chunk(juce::pnglibNamespace::png_struct_def*, unsigned int,
   unsigned int, unsigned long*, int) */

int __cdecl
juce::pnglibNamespace::png_decompress_chunk
          (pnglibNamespace *param_1,int param_2,uint param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  char *pcVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  size_t __size;
  int local_60;
  int local_5c;
  void *local_58;
  ulong local_50;
  size_t local_48;
  long local_40;
  pnglibNamespace *local_38;
  
  uVar5 = *(ulong *)(param_1 + 0x328);
  if (uVar5 + 1 < 2) {
    uVar8 = (ulong)(param_3 + 1);
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar8 = (ulong)(param_3 + 1);
    if (uVar5 < uVar8) {
      if (*(long *)(param_1 + 0x90) == 0) {
        *(char **)(param_1 + 0x90) = "insufficient memory";
        return -4;
      }
      return -4;
    }
  }
  if (uVar5 - uVar8 < *param_4) {
    *param_4 = uVar5 - uVar8;
  }
  uVar5 = png_inflate_claim((long)param_1,*(undefined4 *)(param_1 + 0x138));
  iVar3 = (int)uVar5;
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      return -7;
    }
    return iVar3;
  }
  uVar5 = (ulong)param_3;
  local_5c = param_2 - param_3;
  iVar3 = png_inflate((long)param_1,*(int *)(param_1 + 0x138),*(long *)(param_1 + 0x358) + uVar5,
                      &local_5c,0,(long *)param_4);
  if (iVar3 == 1) {
    if ((((*(long *)(param_1 + 0xa0) == 0) || (*(long *)(param_1 + 0xa8) == 0)) ||
        (plVar2 = *(long **)(param_1 + 0x98), plVar2 == (long *)0x0)) ||
       ((local_38 = param_1 + 0x60, (pnglibNamespace *)*plVar2 != local_38 ||
        (0x1f < (int)plVar2[1] - 0x3f34U)))) {
      iVar4 = -7;
      if (*(long *)(param_1 + 0x90) == 0) {
        *(char **)(param_1 + 0x90) = "unexpected end of LZ stream";
      }
    }
    else {
      *(undefined8 *)((long)plVar2 + 0x3c) = 0;
      *(undefined4 *)((long)plVar2 + 0x44) = 0;
      plVar2[5] = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      if (*(uint *)(plVar2 + 2) != 0) {
        *(ulong *)(param_1 + 0xc0) = (ulong)(*(uint *)(plVar2 + 2) & 1);
      }
      plVar2[1] = 0x3f34;
      *(undefined8 *)((long)plVar2 + 0x14) = 0xffffffff00000000;
      *(undefined4 *)((long)plVar2 + 0x1c) = 0x8000;
      plVar2[6] = 0;
      plVar2[10] = 0;
      *(undefined4 *)(plVar2 + 0xb) = 0;
      plVar1 = plVar2 + 0xab;
      plVar2[0x12] = (long)plVar1;
      plVar2[0xe] = (long)plVar1;
      plVar2[0xd] = (long)plVar1;
      plVar2[0x37d] = -0xffffffff;
      local_50 = *param_4;
      local_40 = uVar5 + local_50;
      __size = local_40 + 1;
      if ((__size == 0) || (pvVar6 = calloc(1,__size), local_60 = local_5c, pvVar6 == (void *)0x0))
      {
        *(char **)(param_1 + 0x90) = "insufficient memory";
        iVar4 = -4;
      }
      else {
        if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x138)) {
          *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x358) + uVar5;
          *(ulong *)(param_1 + 0x78) = (long)pvVar6 + uVar5;
          uVar8 = 0;
          iVar3 = 0;
          uVar10 = local_50;
          iVar9 = local_5c;
          local_58 = pvVar6;
          local_48 = __size;
          do {
            iVar3 = iVar3 + iVar9;
            *(int *)(param_1 + 0x68) = iVar3;
            uVar10 = uVar10 + uVar8;
            uVar8 = 0xffffffff;
            if (uVar10 < 0xffffffff) {
              uVar8 = uVar10;
            }
            *(int *)(param_1 + 0x80) = (int)uVar8;
            uVar10 = uVar10 - uVar8;
            if ((param_1[400] != (pnglibNamespace)0x0) && (iVar3 != 0)) {
              if (**(char **)(param_1 + 0x60) < '\0') {
                *(char **)(param_1 + 0x90) = "invalid window size (libpng)";
                iVar4 = -3;
                break;
              }
              param_1[400] = (pnglibNamespace)0x0;
            }
            iVar4 = zlibNamespace::inflate((long *)local_38,(uint)(uVar10 == 0) << 2);
            iVar9 = 0;
            iVar3 = *(int *)(param_1 + 0x68);
            uVar8 = (ulong)*(uint *)(param_1 + 0x80);
          } while (iVar4 == 0);
          lVar11 = uVar10 + (uVar8 & 0xffffffff);
          if (lVar11 != 0) {
            *param_4 = *param_4 - lVar11;
          }
          if (iVar3 != 0) {
            local_60 = local_60 - iVar3;
            local_5c = local_60;
          }
          if (*(long *)(param_1 + 0x90) == 0) {
            if (iVar4 + 7U < 10) {
              pcVar7 = (&PTR_s_unexpected_zlib_return_00712720)[(int)(iVar4 + 7U)];
            }
            else {
              pcVar7 = "unexpected zlib return code";
            }
            *(char **)(param_1 + 0x90) = pcVar7;
          }
          pvVar6 = local_58;
          if ((iVar4 == 1) && (iVar4 = -7, local_50 == *param_4)) {
            *(undefined1 *)((long)local_58 + local_40) = 0;
            pvVar6 = *(void **)(param_1 + 0x358);
            if (param_3 != 0) {
              memcpy(local_58,pvVar6,uVar5);
            }
            *(void **)(param_1 + 0x358) = local_58;
            *(size_t *)(param_1 + 0x360) = local_48;
            if (pvVar6 != (void *)0x0) {
              free(pvVar6);
            }
            iVar4 = 1;
            if (param_2 - param_3 != local_60) {
              png_chunk_benign_error(param_1,0x5e44f4);
            }
            goto LAB_003a4144;
          }
        }
        else {
          *(char **)(param_1 + 0x90) = "zstream unclaimed";
          iVar4 = -2;
        }
        free(pvVar6);
      }
    }
  }
  else {
    iVar4 = -7;
    if (iVar3 != 0) {
      iVar4 = iVar3;
    }
  }
LAB_003a4144:
  *(undefined4 *)(param_1 + 0x58) = 0;
  return iVar4;
}


