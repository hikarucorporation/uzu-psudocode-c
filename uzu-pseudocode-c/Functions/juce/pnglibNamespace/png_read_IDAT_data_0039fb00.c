// Function : png_read_IDAT_data
// Namespace: juce:pnglibNamespace
// Entry    : 0039fb00
// Prototype: undefined png_read_IDAT_data(pnglibNamespace * param_1, long param_2, ulong param_3)
// Body     : 0039fb00 - 0039fed8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_read_IDAT_data(juce::pnglibNamespace::png_struct_def*, unsigned char*,
   unsigned long) */

void __cdecl
juce::pnglibNamespace::png_read_IDAT_data(pnglibNamespace *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong *__ptr;
  bool bVar4;
  ulong __size;
  char *pcVar5;
  ulong uVar6;
  pnglibNamespace *ppVar7;
  uint local_45c;
  pnglibNamespace *local_458;
  pnglibNamespace *local_450;
  long local_448;
  ulong *local_440;
  undefined1 local_438 [1032];
  
  ppVar7 = param_1 + 0x60;
  *(long *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  local_458 = param_1 + 0x358;
  local_450 = ppVar7;
  local_448 = param_2;
  do {
    iVar2 = *(int *)(param_1 + 0x68);
    if (iVar2 == 0) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x168);
      while ((uint)uVar3 == 0) {
        *(undefined4 *)(param_1 + 0x36c) = 0x81;
        if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_0039fed1;
        bVar4 = (~*(uint *)(param_1 + 0x50) & 0x300) == 0;
        if ((*(uint *)(param_1 + 0x138) & 0x20000000) == 0) {
          bVar4 = (bool)((byte)(*(uint *)(param_1 + 0x50) >> 0xb) & 1);
        }
        (**(code **)(param_1 + 0x20))(param_1,&local_45c,4);
        if ((bVar4 != true) &&
           ((local_45c >> 0x18 | (local_45c & 0xff0000) >> 8 | (local_45c & 0xff00) << 8 |
            local_45c << 0x18) != *(uint *)(param_1 + 0x16c))) {
          if (((byte)param_1[0x13b] & 0x20) == 0) {
            if ((*(uint *)(param_1 + 0x50) & 0x400) == 0) goto LAB_0039fed1;
          }
          else if ((*(uint *)(param_1 + 0x50) & 0x200) != 0) goto LAB_0039fed1;
          png_chunk_warning((long)param_1,0x5e443b);
        }
        uVar3 = png_read_chunk_header(param_1);
        *(int *)(param_1 + 0x168) = (int)uVar3;
        if (*(int *)(param_1 + 0x138) != 0x49444154) goto LAB_0039fed1;
      }
      __size = (ulong)*(uint *)(param_1 + 0x368);
      if ((uint)uVar3 < *(uint *)(param_1 + 0x368)) {
        __size = uVar3 & 0xffffffff;
      }
      __ptr = *(ulong **)(param_1 + 0x358);
      iVar2 = (int)__size;
      if (__ptr == (ulong *)0x0) {
        if (iVar2 == 0) goto LAB_0039fed1;
LAB_0039fca5:
        __ptr = calloc(1,__size);
        if (__ptr == (ulong *)0x0) goto LAB_0039fed1;
        *(ulong **)(param_1 + 0x358) = __ptr;
        *(ulong *)(param_1 + 0x360) = __size;
      }
      else if (*(ulong *)(param_1 + 0x360) < __size) {
        *(undefined8 *)local_458 = 0;
        *(undefined8 *)(local_458 + 8) = 0;
        free(__ptr);
        goto LAB_0039fca5;
      }
      if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_0039fed1;
      (**(code **)(param_1 + 0x20))(param_1,__ptr,__size);
      bVar4 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
      if (((byte)param_1[0x13b] & 0x20) == 0) {
        bVar4 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
      }
      if ((iVar2 != 0) && (bVar4)) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x16c);
        local_440 = __ptr;
        do {
          uVar6 = __size & 0xffffffff;
          if ((int)__size == 0) {
            uVar6 = 0xffffffff;
          }
          uVar3 = zlibNamespace::crc32_z((uint)uVar3,__ptr,uVar6);
          __ptr = (ulong *)((long)__ptr + uVar6);
          __size = __size - uVar6;
        } while (__size != 0);
        *(int *)(param_1 + 0x16c) = (int)uVar3;
        __ptr = local_440;
        param_2 = local_448;
        ppVar7 = local_450;
      }
      *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) - iVar2;
      *(ulong **)(param_1 + 0x60) = __ptr;
      *(int *)(param_1 + 0x68) = iVar2;
      if (param_2 != 0) goto LAB_0039fb60;
LAB_0039fd85:
      *(undefined1 **)(param_1 + 0x78) = local_438;
      *(undefined4 *)(param_1 + 0x80) = 0x400;
      if (param_1[400] == (pnglibNamespace)0x0) goto LAB_0039fdbd;
LAB_0039fda5:
      if (iVar2 == 0) goto LAB_0039fdbd;
      if (-1 < **(char **)(param_1 + 0x60)) {
        param_1[400] = (pnglibNamespace)0x0;
        goto LAB_0039fdbd;
      }
      pcVar5 = "invalid window size (libpng)";
      *(char **)(param_1 + 0x90) = "invalid window size (libpng)";
      *(undefined4 *)(param_1 + 0x80) = 0;
joined_r0x0039fe9c:
      if ((param_2 != 0) || (((byte)param_1[0x52] & 0x10) == 0)) {
LAB_0039fed1:
                    /* WARNING: Subroutine does not return */
        png_err(param_1);
      }
LAB_0039fea4:
      png_chunk_warning((long)param_1,(long)pcVar5);
      return;
    }
    if (param_2 == 0) goto LAB_0039fd85;
LAB_0039fb60:
    uVar3 = 0xffffffff;
    if (param_3 < 0xffffffff) {
      uVar3 = param_3;
    }
    param_3 = param_3 - uVar3;
    *(int *)(param_1 + 0x80) = (int)uVar3;
    if (param_1[400] != (pnglibNamespace)0x0) goto LAB_0039fda5;
LAB_0039fdbd:
    iVar2 = zlibNamespace::inflate((long *)ppVar7,0);
    uVar3 = 0x400 - (ulong)*(uint *)(param_1 + 0x80);
    if (param_2 != 0) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x80);
    }
    param_3 = uVar3 + param_3;
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        *(undefined8 *)(param_1 + 0x78) = 0;
        param_1[0x4c] = (pnglibNamespace)((byte)param_1[0x4c] | 8);
        uVar1 = *(uint *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = uVar1 | 8;
        if ((*(int *)(param_1 + 0x68) != 0) || (*(int *)(param_1 + 0x168) != 0)) {
          if ((uVar1 & 0x100000) == 0) goto LAB_0039fed1;
          png_chunk_warning((long)param_1,0x5e4774);
        }
        if (param_3 == 0) {
          return;
        }
        if ((param_2 != 0) || (((byte)param_1[0x52] & 0x10) == 0)) goto LAB_0039fed1;
        pcVar5 = "Too much image data";
        goto LAB_0039fea4;
      }
      pcVar5 = *(char **)(param_1 + 0x90);
      if (pcVar5 == (char *)0x0) {
        if (iVar2 + 7U < 10) {
          pcVar5 = (&PTR_s_unexpected_zlib_return_007126d0)[(int)(iVar2 + 7U)];
        }
        else {
          pcVar5 = "unexpected zlib return code";
        }
        *(char **)(param_1 + 0x90) = pcVar5;
      }
      goto joined_r0x0039fe9c;
    }
    if (param_3 == 0) {
      return;
    }
  } while( true );
}


