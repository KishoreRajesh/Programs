import requests
from bs4 import BeautifulSoup
url = "https://www.imdb.com/chart/top/"

headers = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.124 Safari/537.36"
}

response = requests.get(url, headers=headers)

if response.status_code == 200:
    soup = BeautifulSoup(response.content, 'html.parser')
    
    movie_list = soup.find('ul', class_='ipc-metadata-list')      
    if movie_list:
        movies = movie_list.find_all('li', class_='ipc-metadata-list-summary-item')
        
        for movie in movies:
            title_column = movie.find('div', class_='ipc-metadata-list-summary-item__tc')
            title = title_column.a.text
            
            colum = movie.find_all('span', class_='cli-title-metadata-item')
            year = colum[0].text 
            
            rating = colum[2].text
            
            movie_url = "https://www.imdb.com" + title_column.find('a')['href']
            
            print(f"Title: {title}")
            print(f"Year: {year}")
            print(f"IMDb Rating: {rating}")
            print(f"Movie URL: {movie_url}")
            print('-' * 50)
    else:
        print("Could not find the movie list. Please check the HTML structure of the IMDb page.")
else:
    print(f"Failed to retrieve the IMDb page. Status code: {response.status_code}") 
