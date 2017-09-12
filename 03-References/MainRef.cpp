#include <iostream>
#include <string>
#include <time.h>
#include <random>
// Written Functions

void CreateRef()
{
	int num = 0;
	float dec = 0.0f;
	bool tf = false;
	char letter = 'a';


	int& numRef = num;
	float& decRef = dec;
	bool& tfRef = tf;
	char& letterRef = letter;

}

void ProductofTwo(float a, float b, float& c)
{
	c += a + b;
}

void swap(float& a, float& b)
{
	float swap = a;
	a = b;
	b = swap;
}


struct Aussiegochi
{
	float happiness = 100;
	float hunger = 100;
	float thirst = 100;
	float sanity = 100;
};

void feedAussie(Aussiegochi aus)
{
	aus.hunger += 10;
	aus.happiness += 5;
	if (aus.hunger > 100) { aus.hunger = 100; }
	if (aus.happiness > 100) { aus.happiness = 100; }
}
void waterAussie(Aussiegochi aus)
{
	aus.thirst += 10;
	aus.happiness += 5;
	if (aus.thirst > 100) { aus.thirst = 100; }
	if (aus.happiness > 100) { aus.happiness = 100; }
}
void abuseAussie(Aussiegochi aus)
{
	aus.happiness -= 10;
	if (aus.happiness < 0) { aus.happiness = 0; }
}
void coddleAussie(Aussiegochi aus)
{
	aus.happiness += 10;
	aus.sanity -= 5;
	if (aus.happiness > 100) { aus.happiness = 100; }
}

struct Track
{
	std::string trackName;
	float playtime;
};

struct Playlist
{
	std::string playlistName; // name of playlist
	Track * Tracklist;
	int trackCount;
};

void printPlaylist(const Playlist& pl)
{
	std::cout << pl.playlistName << std::endl;
	for (int i = 0; i < pl.trackCount; i++)
	{
		std::cout << "[" << (int)pl.Tracklist[i].playtime << ":" << (pl.Tracklist[i].playtime - (int)pl.Tracklist[i].playtime) * 100 << "] " ;
		std::cout <<  pl.Tracklist[i].trackName << std::endl;
		

	}
	
}
void shufflePlaylist(Playlist& pl)
{
	srand(time(NULL));
	int RANDO = rand() % 100;
	Track temp;

	
	while (RANDO > 0)
	{
		int bogo = rand() % (pl.trackCount - 1);

		temp = pl.Tracklist[bogo];
		pl.Tracklist[bogo] = pl.Tracklist[bogo + 1];
		pl.Tracklist[bogo + 1] = temp;
		RANDO--;
	}
	// if(Indexs has not already been slotted, slot the track at rando, otherwise pick a new slot )


}
void dedupePlaylist(Playlist& pl)
{
	for (int i = 0; i <= pl.trackCount; i++)
	{
		for (int k = i + 1; k <= pl.trackCount; k++)
		{
			if (pl.Tracklist[i].trackName == pl.Tracklist[k].trackName)
			{
			//stuff

			}
			
		}
	}
}




int main()
{
	Playlist play;
	play.trackCount = 5;
	play.playlistName = "SadPlaylist";
	play.Tracklist = new Track[10];
	play.Tracklist[0].playtime = 3.33f;
	play.Tracklist[0].trackName = "SupBro";


	play.Tracklist[1].playtime = 3.55f;
	play.Tracklist[1].trackName = "CryMeToSleep";

	play.Tracklist[2].playtime = 4.27f;
	play.Tracklist[2].trackName = "ILove Flowers";

	play.Tracklist[3].playtime = 9.20f;
	play.Tracklist[3].trackName = "PokeMon Theme Song";

	play.Tracklist[4].playtime = 4.27f;
	play.Tracklist[4].trackName = "ILove Flowers";

	dedupePlaylist(play);


	printPlaylist(play);

	
	while (true) {};
}