// Function : override_features_indic
// Namespace: 
// Entry    : 00426e50
// Prototype: undefined override_features_indic(long param_1)
// Body     : 00426e50 - 00426eab


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* override_features_indic(hb_ot_shape_planner_t*) */

void __cdecl override_features_indic(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push
                     ((hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> *)(param_1 + 0x78));
  *(undefined4 *)puVar1 = 0x6c696761;
  *(undefined4 *)((long)puVar1 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar1[1] = 0x100000000;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar1 = hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push
                     ((hb_vector_t<hb_ot_map_builder_t::stage_info_t,false> *)(param_1 + 0x88));
  *(undefined4 *)puVar1 = *(undefined4 *)(param_1 + 0x70);
  puVar1[1] = hb_syllabic_clear_var;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  return;
}


