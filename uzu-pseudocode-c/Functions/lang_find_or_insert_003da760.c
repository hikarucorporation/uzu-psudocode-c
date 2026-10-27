// Function : lang_find_or_insert
// Namespace: 
// Entry    : 003da760
// Prototype: long * lang_find_or_insert(byte * param_1)
// Body     : 003da760 - 003da8e8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* lang_find_or_insert(char const*) */

long * __cdecl lang_find_or_insert(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  size_t sVar6;
  byte *__dest;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  
  plVar3 = langs;
  do {
    if (plVar3 != (long *)0x0) {
      plVar5 = plVar3;
      do {
        bVar1 = *(byte *)plVar5[1];
        if (bVar1 == 0) {
          if ((&canon_map)[*param_1] == '\0') {
            langs = plVar3;
            return plVar5;
          }
        }
        else {
          lVar7 = 0;
          do {
            uVar4 = (uint)bVar1;
            uVar9 = (uint)(char)(&canon_map)[param_1[lVar7]];
            if (uVar4 != uVar9) goto LAB_003da7e8;
            bVar1 = ((byte *)plVar5[1])[lVar7 + 1];
            lVar7 = lVar7 + 1;
          } while (bVar1 != 0);
          uVar9 = (uint)(char)(&canon_map)[param_1[lVar7]];
          uVar4 = 0;
LAB_003da7e8:
          if (uVar9 == uVar4) {
            langs = plVar3;
            return plVar5;
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    langs = plVar3;
    plVar5 = calloc(1,0x10);
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar5 = (long)plVar3;
    sVar6 = strlen((char *)param_1);
    sVar6 = sVar6 + 1;
    __dest = malloc(sVar6);
    plVar5[1] = (long)__dest;
    if (__dest == (byte *)0x0) {
      free(plVar5);
      return (long *)0x0;
    }
    pbVar2 = __dest;
    if (sVar6 == 0) goto LAB_003da870;
    memcpy(__dest,param_1,sVar6);
    bVar1 = *__dest;
    pbVar8 = __dest;
    while (__dest = (byte *)(ulong)bVar1, pbVar2 = pbVar8, bVar1 != 0) {
LAB_003da870:
      pbVar8 = pbVar2 + 1;
      *pbVar2 = (&canon_map)[(ulong)__dest & 0xff];
      bVar1 = *pbVar8;
    }
    LOCK();
    bVar10 = plVar3 == langs;
    if (bVar10) {
      langs = plVar5;
    }
    UNLOCK();
    if (bVar10) {
      if (plVar3 == (long *)0x0) {
        atexit(free_langs);
      }
      return plVar5;
    }
    free((void *)plVar5[1]);
    free(plVar5);
    plVar3 = langs;
  } while( true );
}


