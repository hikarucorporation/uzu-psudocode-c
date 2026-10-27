// Function : get_color
// Namespace: OT:hb_paint_context_t
// Entry    : 0046b2d0
// Prototype: uint get_color(float param_1, hb_paint_context_t * this, uint param_3, undefined4 * param_4)
// Body     : 0046b2d0 - 0046b3d0


/* OT::hb_paint_context_t::get_color(unsigned int, float, int*) */

uint __thiscall
OT::hb_paint_context_t::get_color
          (float param_1,hb_paint_context_t *this,uint param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar7;
  uint uVar6;
  undefined8 uVar8;
  uint local_20;
  float local_1c;
  
  local_20 = *(uint *)(this + 0x2c);
  *param_4 = 1;
  if (param_3 != 0xffff) {
    lVar1 = *(long *)(this + 0x10);
    if (*(long *)(lVar1 + 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0x80) + 0x68);
    }
    local_1c = param_1;
    iVar2 = (**(code **)(lVar1 + 0x78))(lVar1,*(undefined8 *)(this + 0x18),param_3,&local_20,uVar8);
    if (iVar2 == 0) {
      uVar6 = *(uint *)(this + 0x28);
      puVar3 = hb_lazy_loader_t<OT::CPAL,hb_table_lazy_loader_t<OT::CPAL,36u,true>,hb_face_t,36u,hb_blob_t>
               ::get((hb_lazy_loader_t<OT::CPAL,hb_table_lazy_loader_t<OT::CPAL,36u,true>,hb_face_t,36u,hb_blob_t>
                      *)(*(long *)(*(long *)(this + 0x20) + 0x20) + 0x188));
      if (uVar6 < (ushort)(*(ushort *)(puVar3 + 1) << 8 | *(ushort *)(puVar3 + 1) >> 8)) {
        uVar4 = *(ushort *)((long)puVar3 + (ulong)uVar6 * 2 + 0xc);
        uVar4 = uVar4 << 8 | uVar4 >> 8;
        uVar5 = *(ushort *)((long)puVar3 + 2) << 8 | *(ushort *)((long)puVar3 + 2) >> 8;
        uVar7 = (uint)(ushort)(*(ushort *)((long)puVar3 + 6) << 8 |
                              *(ushort *)((long)puVar3 + 6) >> 8);
        uVar6 = uVar7 - uVar4;
        if (uVar7 < uVar4) {
          uVar6 = 0;
        }
        if (uVar5 < uVar6) {
          uVar6 = (uint)uVar5;
        }
        if (param_3 < uVar6) {
          uVar6 = puVar3[2];
          uVar6 = *(uint *)((long)puVar3 +
                           (ulong)param_3 * 4 +
                           (ulong)uVar4 * 4 +
                           (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                  uVar6 << 0x18));
          local_20 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
          ;
        }
      }
    }
    *param_4 = 0;
    param_1 = local_1c;
  }
  return (uint)(long)((float)(local_20 & 0xff) * param_1) & 0xff | local_20 & 0xffffff00;
}


