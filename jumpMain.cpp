int jumpMain(string userID) {
	int score;
	JumpGame j(userID);
	int end = 0;
	j.init();
	int menu_select = j.menu();
	if (menu_select == 0) {
		score = j.game_start();
		DataSave save;
		save.save(3, score, userID);
	}
	else if (menu_select == 1) {
		return 0;
	}

	return 0;
}
