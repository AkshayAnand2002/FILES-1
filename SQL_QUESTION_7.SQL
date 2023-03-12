https://www.codingninjas.com/codestudio/problems/testingg-sql_1755903?leftPanelTab=0
select imdb.title,imdb.rating from imdb join genre on imdb.movie_id=genre.movie_id where genre.genre like 'C%' and imdb.title like '%(2014)' and imdb.budget>40000000;
