// Function : collect_features_arabic
// Namespace: 
// Entry    : 00433b40
// Prototype: undefined collect_features_arabic(long param_1)
// Body     : 00433b40 - 00433ff1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* collect_features_arabic(hb_ot_shape_planner_t*) */

void __cdecl collect_features_arabic(long param_1)

{
  hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> *this;
  int *piVar1;
  hb_vector_t<hb_ot_map_builder_t::stage_info_t,false> *this_00;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  this = (hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> *)(param_1 + 0x78);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x73746368;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x100000001;
  *(undefined4 *)(puVar3 + 2) = 1;
  piVar1 = (int *)(param_1 + 0x70);
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  this_00 = (hb_vector_t<hb_ot_map_builder_t::stage_info_t,false> *)(param_1 + 0x88);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
  *(undefined4 *)puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = record_stch;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x63636d70;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x900000001;
  *(undefined4 *)(puVar3 + 2) = 1;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x6c6f636c;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x900000001;
  *(undefined4 *)(puVar3 + 2) = 1;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
  *(undefined4 *)puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = 0;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  iVar2 = *(int *)(param_1 + 0xc);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x69736f6c;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar3 + 1) = 1;
  *(uint *)((long)puVar3 + 0xc) = (uint)(iVar2 == 0x41726162) * 2 + 8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
  *(undefined4 *)puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = 0;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  iVar2 = *(int *)(param_1 + 0xc);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x66696e61;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar3 + 1) = 1;
  *(uint *)((long)puVar3 + 0xc) = (uint)(iVar2 == 0x41726162) * 2 + 8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
  *(undefined4 *)puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = 0;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x66696e32;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x800000001;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
  *(undefined4 *)puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = 0;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x66696e33;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x800000001;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
  *(undefined4 *)puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = 0;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  iVar2 = *(int *)(param_1 + 0xc);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x6d656469;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar3 + 1) = 1;
  *(uint *)((long)puVar3 + 0xc) = (uint)(iVar2 == 0x41726162) * 2 + 8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
  *(undefined4 *)puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = 0;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x6d656432;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x800000001;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
  *(undefined4 *)puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = 0;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  iVar2 = *(int *)(param_1 + 0xc);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x696e6974;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar3 + 1) = 1;
  *(uint *)((long)puVar3 + 0xc) = (uint)(iVar2 == 0x41726162) * 2 + 8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
  *(undefined4 *)puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = 0;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  puVar3 = hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
  *(undefined4 *)puVar3 = *(undefined4 *)(param_1 + 0x70);
  puVar3[1] = deallocate_buffer_var;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x726c6967;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0xb00000001;
  *(undefined4 *)(puVar3 + 2) = 1;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  if (*(int *)(param_1 + 0xc) == 0x41726162) {
    piVar4 = (int *)hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
    *piVar4 = *piVar1;
    *(code **)(piVar4 + 2) = arabic_fallback_shape;
    *piVar1 = *piVar1 + 1;
  }
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x63616c74;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x900000001;
  *(undefined4 *)(puVar3 + 2) = 1;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar5 = hb_ot_layout_language_find_feature
                    (*(long *)(param_1 + 0x28),0x47535542,*(uint *)(param_1 + 0x60),
                     *(uint *)(param_1 + 0x68));
  if ((int)uVar5 == 0) {
    uVar5 = hb_ot_layout_language_find_feature
                      (*(long *)(param_1 + 0x28),0x47504f53,*(uint *)(param_1 + 100),
                       *(uint *)(param_1 + 0x6c));
    if ((int)uVar5 == 0) {
      piVar4 = (int *)hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push(this_00);
      *piVar4 = *piVar1;
      piVar4[2] = 0;
      piVar4[3] = 0;
      *piVar1 = *piVar1 + 1;
    }
  }
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x6c696761;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x900000001;
  *(undefined4 *)(puVar3 + 2) = 1;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x636c6967;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x900000001;
  *(undefined4 *)(puVar3 + 2) = 1;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x6d736574;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x900000001;
  *(undefined4 *)(puVar3 + 2) = 1;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  return;
}


