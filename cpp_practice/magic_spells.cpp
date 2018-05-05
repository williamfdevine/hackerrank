/**
	@file magic_spells.cpp
*/

/* Check known/specialized spells */
if(Fireball* fireball = dynamic_cast<Fireball*>(spell))
{
	fireball->revealFirepower();
}
else if(Frostbite* frostbite = dynamic_cast<Frostbite*>(spell))
{
	frostbite->revealFrostpower();
}
else if(Thunderstorm* thunderstorm = dynamic_cast<Thunderstorm*>(spell))
{
	thunderstorm->revealThunderpower();
}
else if(Waterbolt* waterbolt = dynamic_cast<Waterbolt*>(spell))
{
	waterbolt->revealWaterpower();
}
/* Generic */
else
{
	std::string name = spell->revealScrollName();
    std::string journal = SpellJournal::read();
    int nameLength = name.length(); // m
    int journalLength = journal.length(); // n
    int name_match[nameLength + 1][journalLength + 1]; 

    // solve for LCS
    for (int i = 0; i <= nameLength; i++) 
    {
        name_match[i][0] = 0;
    }
    for (int j = 0; j <= journalLength; j++)
    {
      name_match[0][j]=0;  
    } 
    for (int i = 1; i <= nameLength; i++) 
    {
        for (int j = 1; j <= journalLength; j++) 
        {
            if (name[i-1] == journal[j-1])
            {
                name_match[i][j] = name_match[i-1][j-1] + 1;
            }
            else
            {
                name_match[i][j] = std::max(name_match[i][j-1], name_match[i-1][j]);
            }
        }
    }  
    
    std::cout << name_match[nameLength][journalLength] << std::endl; 
}