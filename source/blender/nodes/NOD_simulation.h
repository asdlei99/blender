#ifndef __NOD_SIMULATION_H__
#define __NOD_SIMULATION_H__

#ifdef __cplusplus
extern "C" {
#endif

extern struct bNodeTreeType *ntreeType_Simulation;

void register_node_tree_type_sim(void);

void register_node_type_sim_group(void);

void register_node_type_sim_particle_simulation(void);
void register_node_type_sim_force(void);
void register_node_type_sim_set_particle_attribute(void);
void register_node_type_sim_particle_birth_event(void);
void register_node_type_sim_particle_time_step_event(void);
void register_node_type_sim_execute_condition(void);
void register_node_type_sim_multi_execute(void);
void register_node_type_sim_particle_mesh_emitter(void);
void register_node_type_sim_particle_mesh_collision_event(void);
void register_node_type_sim_emit_particles(void);

#ifdef __cplusplus
}
#endif

#endif /* __NOD_SIMULATION_H__ */