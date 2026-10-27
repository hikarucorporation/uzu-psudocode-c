// Function : create
// Namespace: hb_shapers_lazy_loader_t
// Entry    : 00417b20
// Prototype: undefined8 * create(void)
// Body     : 00417b20 - 00417cea


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_shapers_lazy_loader_t::create() */

undefined8 * hb_shapers_lazy_loader_t::create(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  char *__s;
  undefined8 *puVar6;
  char *__s_00;
  char *pcVar7;
  size_t sVar8;
  size_t __n;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  __s = getenv("HB_SHAPER_LIST");
  if ((__s == (char *)0x0) || (*__s == '\0')) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar6 = calloc(1,0x30);
    puVar4 = PTR__hb_fallback_shape_00712af8;
    puVar10 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[4] = ram0x00712af0;
      puVar6[5] = puVar4;
      uVar1 = s_fallback_00712ae8._0_8_;
      puVar6[2] = PTR__hb_ot_shape_00712ae0;
      puVar6[3] = uVar1;
      uVar1 = _UNK_00712ad8;
      *puVar6 = __hb_all_shapers;
      puVar6[1] = uVar1;
      __s_00 = (char *)(puVar6 + 3);
      do {
        pcVar7 = strchr(__s,0x2c);
        uVar9 = (uint)puVar10;
        if (pcVar7 == (char *)0x0) {
          sVar8 = strlen(__s);
          pcVar7 = __s + sVar8;
        }
        if (uVar9 < 2) {
          __n = (long)pcVar7 - (long)__s;
          sVar8 = strlen((char *)(puVar6 + (long)puVar10 * 3));
          puVar11 = puVar10;
          if ((__n == (long)(int)sVar8) &&
             (iVar5 = strncmp((char *)(puVar6 + (long)puVar10 * 3),__s,__n), iVar5 == 0)) {
            puVar11 = (undefined8 *)(ulong)(uVar9 + 1);
          }
          puVar10 = puVar11;
          if (((uVar9 == 0) && (sVar8 = strlen(__s_00), __n == (long)(int)sVar8)) &&
             (iVar5 = strncmp(__s_00,__s,__n), iVar5 == 0)) {
            uVar1 = puVar6[5];
            uVar2 = *(undefined8 *)__s_00;
            uVar3 = puVar6[4];
            puVar10 = (undefined8 *)(ulong)((int)puVar11 + 1);
            memmove(puVar6 + (long)puVar10 * 3,puVar6 + (long)puVar11 * 3,
                    (ulong)(1 - (int)puVar11) * 0x18);
            puVar6[(long)puVar11 * 3] = uVar2;
            (puVar6 + (long)puVar11 * 3)[1] = uVar3;
            puVar6[(long)puVar11 * 3 + 2] = uVar1;
          }
        }
        __s = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      atexit(free_static_shapers);
      puVar10 = puVar6;
    }
  }
  return puVar10;
}


