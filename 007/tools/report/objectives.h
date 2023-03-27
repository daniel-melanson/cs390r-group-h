#define MISSIONS_A_MAX 18
#define MISSIONS_SA_MAX 19
#define MISSIONS_00A_MAX 20
#define MISSIONS_MAX (MISSIONS_A_MAX + MISSIONS_SA_MAX + MISSIONS_00A_MAX + 1)
#define OBJECTIVES_MAX (OBJ_MAX + 1)

enum OBJECTIVES
{
	OBJ_A = 0,
	OBJ_B,
	OBJ_C,
	OBJ_D,
	OBJ_E,
	OBJ_MAX
};

enum OBJECTIVE_LINES
{
	LINE1 = 0,
	LINE2,
	LINE_MAX
};

struct mission
{
	char *out_name;
	unsigned int time;
	char *diff;
	char *title;
	char *part;
	char *obj[OBJECTIVES_MAX][LINE_MAX];
};

char *diff_char[OBJECTIVES_MAX] = {"a.", "b.", "c.", "d.", "e.", NULL};
int line_rows[] = {1330, 1428, 1527, 1625, 1724, 1822, 1921, 2020, 2119};

#define TIME_SECS(mins, secs) ((mins * 60) + secs)

struct mission missions[MISSIONS_MAX] =
{
	{
		"Dam (Agent)",
		TIME_SECS(0, 52),
		"Agent: James Bond",
		"Mission 1: Arkangelsk",
		"Part i: Dam",
		{
			{"Bungee jump from platform", NULL},
			{NULL, NULL}
		}
	},
	{
		"Facility (Agent)",
		TIME_SECS(0, 42),
		"Agent: James Bond",
		"Mission 1: Arkangelsk",
		"Part ii: Facility",
		{
			{"Gain access to laboratory area", NULL},
			{"Rendezvous with 006", NULL},
			{"Destroy all tanks in bottling room", NULL},
			{"Minimize scientist casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Runway (Agent)",
		TIME_SECS(0, 21),
		"Agent: James Bond",
		"Mission 1: Arkangelsk",
		"Part iii: Runway",
		{
			{"Find plane ignition key", NULL},
			{"Escape in plane", NULL},
			{NULL, NULL}
		}
	},
	{
		"Surface i (Agent)",
		TIME_SECS(1, 2),
		"Agent: James Bond",
		"Mission 2: Severnaya",
		"Part i: Surface",
		{
			{"Power down communications", "dish"},
			{"Enter base via ventilation tower", NULL},
			{NULL, NULL}
		}
	},
	{
		"Bunker i (Agent)",
		TIME_SECS(0, 16),
		"Agent: James Bond",
		"Mission 2: Severnaya",
		"Part ii: Bunker",
		{
			{"Copy Goldeneye key and leave", "original"},
			{"Photograph main video screen", NULL},
			{NULL, NULL}
		}
	},
	{
		"Silo (Agent)",
		TIME_SECS(0, 59),
		"Agent: James Bond",
		"Mission 3: Kirghizstan",
		"Part i: Launch Silo #4",
		{
			{"Photograph satellite", NULL},
			{"Minimize scientist casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Frigate (Agent)",
		TIME_SECS(0, 22),
		"Agent: James Bond",
		"Mission 4: Monte Carlo",
		"Part i: Frigate",
		{
			{"Rescue hostages", NULL},
			{"Plant tracking bug on helicopter", NULL},
			{NULL, NULL}
		}
	},
	{
		"Surface ii (Agent)",
		TIME_SECS(0, 46),
		"Agent: James Bond",
		"Mission 5: Severnaya",
		"Part i: Surface",
		{
			{"Break communications link to", "bunker"},
			{"Gain entry to bunker", NULL},
			{NULL, NULL}
		}
	},
	{
		"Bunker ii (Agent)",
		TIME_SECS(0, 23),
		"Agent: James Bond",
		"Mission 5: Severnaya",
		"Part ii: Bunker",
		{
			{"Recover CCTV tape", NULL},
			{"Escape with Natalya", NULL},
			{NULL, NULL}
		}
	},
	{
		"Statue (Agent)",
		TIME_SECS(2, 18),
		"Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part i: Statue Park",
		{
			{"Contact Valentin", NULL},
			{"Confront and unmask Janus", NULL},
			{"Locate helicopter", NULL},
			{"Rescue Natalya", NULL},
			{"Find flight recorder", NULL},
			{NULL, NULL}
		}
	},
	{
		"Archives (Agent)",
		TIME_SECS(0, 15),
		"Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part ii: Military Archives",
		{
			{"Escape from interrogation room", NULL},
			{"Find Natalya", NULL},
			{"Escape with Natalya", NULL},
			{NULL, NULL}
		}
	},
	{
		"Streets (Agent)",
		TIME_SECS(1, 11),
		"Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part iii: Streets",
		{
			{"Pursue Ourumov and Natalya", NULL},
			{"Minimize civilian casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Depot (Agent)",
		TIME_SECS(0, 23),
		"Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part iv: Depot",
		{
			{"Locate Trevelyan's train", NULL},
			{NULL, NULL}
		}
	},
	{
		"Train (Agent)",
		TIME_SECS(0, 56),
		"Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part v: Train",
		{
			{"Destroy brake units", NULL},
			{"Rescue Natalya", NULL},
			{"Escape to safety", NULL},
			{NULL, NULL}
		}
	},
	{
		"Jungle (Agent)",
		TIME_SECS(0, 49),
		"Agent: James Bond",
		"Mission 7: Cuba",
		"Part i: Jungle",
		{
			{"Destroy drone guns", NULL},
			{"Eliminate Xenia", NULL},
			{"Escort Natalya to Janus base", NULL},
			{NULL, NULL}
		}
	},
	{
		"Control (Agent)",
		TIME_SECS(3, 55),
		"Agent: James Bond",
		"Mission 7: Cuba",
		"Part ii: Control",
		{
			{"Protect Natalya", NULL},
			{"Disable Goldeneye satellite", NULL},
			{"Destroy armored mainframes", NULL},
			{NULL, NULL}
		}
	},
	{
		"Caverns (Agent)",
		TIME_SECS(1, 1),
		"Agent: James Bond",
		"Mission 7: Cuba",
		"Part iii: Water Caverns",
		{
			{"Minimize scientist casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Cradle (Agent)",
		TIME_SECS(0, 33),
		"Agent: James Bond",
		"Mission 7: Cuba",
		"Part iv: Antenna Cradle",
		{
			{"Destroy control console", NULL},
			{"Settle the score with Trevelyan", NULL},
			{NULL, NULL}
		}
	},

	{
		"Dam (Secret Agent)",
		TIME_SECS(1, 16),
		"Secret Agent: James Bond",
		"Mission 1: Arkangelsk",
		"Part i: Dam",
		{
			{"Neutralize all alarms", NULL},
			{"Bungee jump from platform", NULL},
			{NULL, NULL}
		}
	},
	{
		"Facility (Secret Agent)",
		TIME_SECS(0, 51),
		"Secret Agent: James Bond",
		"Mission 1: Arkangelsk",
		"Part ii: Facility",
		{
			{"Gain access to laboratory area", NULL},
			{"Contact double Agent: James Bond", NULL},
			{"Rendezvous with 006", NULL},
			{"Destroy all tanks in bottling room", NULL},
			{"Minimize scientist casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Runway (Secret Agent)",
		TIME_SECS(0, 22),
		"Secret Agent: James Bond",
		"Mission 1: Arkangelsk",
		"Part iii: Runway",
		{
			{"Find plane ignition key", NULL},
			{"Destroy missile battery", NULL},
			{"Escape in plane", NULL},
			{NULL, NULL}
		}
	},
	{
		"Surface i (Secret Agent)",
		TIME_SECS(1, 46),
		"Secret Agent: James Bond",
		"Mission 2: Severnaya",
		"Part i: Surface",
		{
			{"Power down communications", "dish"},
			{"Obtain safe key", NULL},
			{"Steal building plans", NULL},
			{"Enter base via ventilation tower", NULL},
			{NULL, NULL}
		}
	},
	{
		"Bunker i (Secret Agent)",
		TIME_SECS(0, 20),
		"Secret Agent: James Bond",
		"Mission 2: Severnaya",
		"Part ii: Bunker",
		{
			{"Disrupt all surveillance equipment", NULL},
			{"Copy Goldeneye key and leave", "original"},
			{"Photograph main video screen", NULL},
			{NULL, NULL}
		}
	},
	{
		"Silo (Secret Agent)",
		TIME_SECS(1, 7),
		"Secret Agent: James Bond",
		"Mission 3: Kirghizstan",
		"Part i: Launch Silo #4",
		{
			{"Photograph satellite", NULL},
			{"Obtain telemetric data", NULL},
			{"Retrieve satellite circuitry", NULL},
			{"Minimize scientist casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Frigate (Secret Agent)",
		TIME_SECS(0, 58),
		"Secret Agent: James Bond",
		"Mission 4: Monte Carlo",
		"Part i: Frigate",
		{
			{"Rescue hostages", NULL},
			{"Disarm bridge bomb", NULL},
			{"Disarm engine room bomb", NULL},
			{"Plant tracking bug on helicopter", NULL},
			{NULL, NULL}
		}
	},
	{
		"Surface ii (Secret Agent)",
		TIME_SECS(0, 47),
		"Secret Agent: James Bond",
		"Mission 5: Severnaya",
		"Part i: Surface",
		{
			{"Break communications link to", "bunker"},
			{"Disable Spetznaz support aircraft", NULL},
			{"Gain entry to bunker", NULL},
			{NULL, NULL}
		}
	},
	{
		"Bunker ii (Secret Agent)",
		TIME_SECS(0, 42),
		"Secret Agent: James Bond",
		"Mission 5: Severnaya",
		"Part ii: Bunker",
		{
			{"Compare staff / casualty lists", NULL},
			{"Recover CCTV tape", NULL},
			{"Disable all security cameras", NULL},
			{"Escape with Natalya", NULL},
			{NULL, NULL}
		}
	},
	{
		"Statue (Secret Agent)",
		TIME_SECS(2, 17),
		"Secret Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part i: Statue Park",
		{
			{"Contact Valentin", NULL},
			{"Confront and unmask Janus", NULL},
			{"Locate helicopter", NULL},
			{"Rescue Natalya", NULL},
			{"Find flight recorder", NULL},
			{NULL, NULL}
		}
	},
	{
		"Archives (Secret Agent)",
		TIME_SECS(0, 53),
		"Secret Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part ii: Military Archives",
		{
			{"Escape from interrogation room", NULL},
			{"Find Natalya", NULL},
			{"Recover helicopter black box", NULL},
			{"Escape with Natalya", NULL},
			{NULL, NULL}
		}
	},
	{
		"Streets (Secret Agent)",
		TIME_SECS(1, 54),
		"Secret Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part iii: Streets",
		{
			{"Contact Valentin", NULL},
			{"Pursue Ourumov and Natalya", NULL},
			{"Minimize civilian casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Depot (Secret Agent)",
		TIME_SECS(0, 39),
		"Secret Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part iv: Depot",
		{
			{"Destroy computer network", NULL},
			{"Obtain safe key", NULL},
			{"Recover helicopter blueprints", NULL},
			{"Locate Trevelyan's train", NULL},
			{NULL, NULL}
		}
	},
	{
		"Train (Secret Agent)",
		TIME_SECS(1, 23),
		"Secret Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part v: Train",
		{
			{"Destroy brake units", NULL},
			{"Rescue Natalya", NULL},
			{"Locate Janus secret base", NULL},
			{"Escape to safety", NULL},
			{NULL, NULL}
		}
	},
	{
		"Jungle (Secret Agent)",
		TIME_SECS(0, 51),
		"Secret Agent: James Bond",
		"Mission 7: Cuba",
		"Part i: Jungle",
		{
			{"Destroy drone guns", NULL},
			{"Eliminate Xenia", NULL},
			{"Blow up ammo dump", NULL},
			{"Escort Natalya to Janus base", NULL},
			{NULL, NULL}
		}
	},
	{
		"Control (Secret Agent)",
		TIME_SECS(4, 1),
		"Secret Agent: James Bond",
		"Mission 7: Cuba",
		"Part ii: Control",
		{
			{"Protect Natalya", NULL},
			{"Disable Goldeneye satellite", NULL},
			{"Destroy armored mainframes", NULL},
			{NULL, NULL}
		}
	},
	{
		"Caverns (Secret Agent)",
		TIME_SECS(1, 12),
		"Secret Agent: James Bond",
		"Mission 7: Cuba",
		"Part iii: Water Caverns",
		{
			{"Destroy inlet pump controls", NULL},
			{"Destroy outlet pump controls", NULL},
			{"Destroy master pump console", NULL},
			{"Minimize scientist casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Cradle (Secret Agent)",
		TIME_SECS(0, 33),
		"Secret Agent: James Bond",
		"Mission 7: Cuba",
		"Part iv: Antenna Cradle",
		{
			{"Destroy control console", NULL},
			{"Settle the score with Trevelyan", NULL},
			{NULL, NULL}
		}
	},
	{
		"Aztec (Secret Agent)",
		TIME_SECS(1, 30),
		"Secret Agent: James Bond",
		"Mission 8: Teotihuaca'n",
		"Part i: Aztec Complex",
		{
			{"Reprogram shuttle guidance", NULL},
			{"Launch shuttle", NULL},
			{NULL, NULL}
		}
	},

	{
		"Dam (00 Agent)",
		TIME_SECS(1, 54),
		"00 Agent: James Bond",
		"Mission 1: Arkangelsk",
		"Part i: Dam",
		{
			{"Neutralize all alarms", NULL},
			{"Install covert modem", NULL},
			{"Intercept data backup", NULL},
			{"Bungee jump from platform", NULL},
			{NULL, NULL}
		}
	},
	{
		"Facility (00 Agent)",
		TIME_SECS(0, 51),
		"00 Agent: James Bond",
		"Mission 1: Arkangelsk",
		"Part ii: Facility",
		{
			{"Gain access to laboratory area", NULL},
			{"Contact double Agent: James Bond", NULL},
			{"Rendezvous with 006", NULL},
			{"Destroy all tanks in bottling room", NULL},
			{"Minimize scientist casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Runway (00 Agent)",
		TIME_SECS(0, 28),
		"00 Agent: James Bond",
		"Mission 1: Arkangelsk",
		"Part iii: Runway",
		{
			{"Find plane ignition key", NULL},
			{"Destroy heavy gun emplacements", NULL},
			{"Destroy missile battery", NULL},
			{"Escape in plane", NULL},
			{NULL, NULL}
		}
	},
	{
		"Surface i (00 Agent)",
		TIME_SECS(1, 47),
		"00 Agent: James Bond",
		"Mission 2: Severnaya",
		"Part i: Surface",
		{
			{"Power down communications", "dish"},
			{"Obtain safe key", NULL},
			{"Steal building plans", NULL},
			{"Enter base via ventilation tower", NULL},
			{NULL, NULL}
		}
	},
	{
		"Bunker i (00 Agent)",
		TIME_SECS(1, 1),
		"00 Agent: James Bond",
		"Mission 2: Severnaya",
		"Part ii: Bunker",
		{
			{"Disrupt all surveillance equipment", NULL},
			{"Copy Goldeneye key and leave", "original"},
			{"Get personnel to activate", "computer"},
			{"Download data from computer", NULL},
			{"Photograph main video screen", NULL},
			{NULL, NULL}
		}
	},
	{
		"Silo (00 Agent)",
		TIME_SECS(1, 21),
		"00 Agent: James Bond",
		"Mission 3: Kirghizstan",
		"Part i: Launch Silo #4",
		{
			{"Plant bombs in fuel rooms", NULL},
			{"Photograph satellite", NULL},
			{"Obtain telemetric data", NULL},
			{"Retrieve satellite circuitry", NULL},
			{"Minimize scientist casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Frigate (00 Agent)",
		TIME_SECS(1, 4),
		"00 Agent: James Bond",
		"Mission 4: Monte Carlo",
		"Part i: Frigate",
		{
			{"Rescue hostages", NULL},
			{"Disarm bridge bomb", NULL},
			{"Disarm engine room bomb", NULL},
			{"Plant tracking bug on helicopter", NULL},
			{NULL, NULL}
		}
	},
	{
		"Surface ii (00 Agent)",
		TIME_SECS(1, 18),
		"00 Agent: James Bond",
		"Mission 5: Severnaya",
		"Part i: Surface",
		{
			{"Disrupt all surveillance equipment", NULL},
			{"Break communications link to", "bunker"},
			{"Disable Spetznaz support aircraft", NULL},
			{"Gain entry to bunker", NULL},
			{NULL, NULL}
		}
	},
	{
		"Bunker ii (00 Agent)",
		TIME_SECS(0, 53),
		"00 Agent: James Bond",
		"Mission 5: Severnaya",
		"Part ii: Bunker",
		{
			{"Compare staff / casualty lists", NULL},
			{"Recover CCTV tape", NULL},
			{"Disable all security cameras", NULL},
			{"Recover Goldeneye operations", "manual"},
			{"Escape with Natalya", NULL},
			{NULL, NULL}
		}
	},
	{
		"Statue (00 Agent)",
		TIME_SECS(2, 17),
		"00 Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part i: Statue Park",
		{
			{"Contact Valentin", NULL},
			{"Confront and unmask Janus", NULL},
			{"Locate helicopter", NULL},
			{"Rescue Natalya", NULL},
			{"Find flight recorder", NULL},
			{NULL, NULL}
		}
	},
	{
		"Archives (00 Agent)",
		TIME_SECS(0, 53),
		"00 Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part ii: Military Archives",
		{
			{"Escape from interrogation room", NULL},
			{"Find Natalya", NULL},
			{"Recover helicopter black box", NULL},
			{"Escape with Natalya", NULL},
			{NULL, NULL}
		}
	},
	{
		"Streets (00 Agent)",
		TIME_SECS(1, 54),
		"00 Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part iii: Streets",
		{
			{"Contact Valentin", NULL},
			{"Pursue Ourumov and Natalya", NULL},
			{"Minimize civilian casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Depot (00 Agent)",
		TIME_SECS(0, 45),
		"00 Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part iv: Depot",
		{
			{"Destroy illegal arms cache", NULL},
			{"Destroy computer network", NULL},
			{"Obtain safe key", NULL},
			{"Recover helicopter blueprints", NULL},
			{"Locate Trevelyan's train", NULL},
			{NULL, NULL}
		}
	},
	{
		"Train (00 Agent)",
		TIME_SECS(1, 48),
		"00 Agent: James Bond",
		"Mission 6: St. Petersburg",
		"Part v: Train",
		{
			{"Destroy brake units", NULL},
			{"Rescue Natalya", NULL},
			{"Locate Janus secret base", NULL},
			{"Crack Boris' password", NULL},
			{"Escape to safety", NULL},
			{NULL, NULL}
		}
	},
	{
		"Jungle (00 Agent)",
		TIME_SECS(0, 52),
		"00 Agent: James Bond",
		"Mission 7: Cuba",
		"Part i: Jungle",
		{
			{"Destroy drone guns", NULL},
			{"Eliminate Xenia", NULL},
			{"Blow up ammo dump", NULL},
			{"Escort Natalya to Janus base", NULL},
			{NULL, NULL}
		}
	},
	{
		"Control (00 Agent)",
		TIME_SECS(4, 2),
		"00 Agent: James Bond",
		"Mission 7: Cuba",
		"Part ii: Control",
		{
			{"Protect Natalya", NULL},
			{"Disable Goldeneye satellite", NULL},
			{"Destroy armored mainframes", NULL},
			{NULL, NULL}
		}
	},
	{
		"Caverns (00 Agent)",
		TIME_SECS(1, 29),
		"00 Agent: James Bond",
		"Mission 7: Cuba",
		"Part iii: Water Caverns",
		{
			{"Destroy inlet pump controls", NULL},
			{"Destroy outlet pump controls", NULL},
			{"Destroy master pump console", NULL},
			{"Use radio to contact Jack Wade", NULL},
			{"Minimize scientist casualties", NULL},
			{NULL, NULL}
		}
	},
	{
		"Cradle (00 Agent)",
		TIME_SECS(0, 33),
		"00 Agent: James Bond",
		"Mission 7: Cuba",
		"Part iv: Antenna Cradle",
		{
			{"Destroy control console", NULL},
			{"Settle the score with Trevelyan", NULL},
			{NULL, NULL}
		}
	},
	{
		"Aztec (00 Agent)",
		TIME_SECS(1, 35),
		"00 Agent: James Bond",
		"Mission 8: Teotihuaca'n",
		"Part i: Aztec Complex",
		{
			{"Reprogram shuttle guidance", NULL},
			{"Launch shuttle", NULL},
			{NULL, NULL}
		}
	},
	{
		"Egypt (00 Agent)",
		TIME_SECS(0, 44),
		"00 Agent: James Bond",
		"Mission 9: el-Saghira",
		"Part i: Egyptian Temple",
		{
			{"Recover the golden gun", NULL},
			{"Defeat Baron Samedi?", NULL},
			{NULL, NULL}
		}
	},

	/* End of struct */
	{
		NULL,
		0,
		NULL,
		NULL,
		NULL,
		{
			{NULL, NULL}
		}
	}
};
